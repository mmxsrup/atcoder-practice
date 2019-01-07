#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vint;
typedef pair<int,int> pint;
typedef vector<pint> vpint;
#define rep(i,n) for(int i=0;i<(n);i++)
#define REP(i,n) for(int i=n-1;i>=(0);i--)
#define reps(i,f,n) for(int i=(f);i<(n);i++)
#define each(it,v) for(__typeof((v).begin()) it=(v).begin();it!=(v).end();it++)
#define all(v) (v).begin(),(v).end()
#define eall(v) unique(all(v), v.end())
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define chmax(a, b) a = (((a)<(b)) ? (b) : (a))
#define chmin(a, b) a = (((a)>(b)) ? (b) : (a))
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll INFF = 1e18;

string a[1010];
ll dp[1010][1010];

int main(int argc, char const *argv[])
{
	int h, w; cin >> h >> w;
	rep(i, h) cin >> a[i];
	dp[0][0] = 1;
	rep(i, h)rep(j, w){
		if (a[i][j] == '#') continue;
		if (i - 1 >= 0) (dp[i][j] += dp[i - 1][j]) %= MOD;
		if (j - 1 >= 0) (dp[i][j] += dp[i][j - 1]) %= MOD;
	}

	printf("%lld\n", dp[h - 1][w - 1]);
	return 0;
}
