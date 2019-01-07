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

int n, k;
int a[110];
int dp[100010];

int grundy(int t) {
	if (dp[t] != -1) return dp[t];

	set<int> s;
	rep(i, n) {
		if (t - a[i] >= 0) s.insert(grundy(t - a[i]));
	}
	int res = 0;
	while(s.count(res)) res++;
	return dp[t] = res;
}

int main(int argc, char const *argv[])
{
	cin >> n >> k;
	rep(i, n) cin >> a[i];
	rep(i, 100010) dp[i] = -1;

	if (grundy(k) == 0) printf("Second\n");
	else printf("First\n");

	return 0;
}