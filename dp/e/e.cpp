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

ll dp[110][1000100];

int main(int argc, char const *argv[])
{
	int N, W; cin >> N >> W;
	vector<int> w(N), v(N); {
		rep(i, N) cin >> w[i] >> v[i];
	}

	rep(i, 110) rep(j, 1000100) dp[i][j] = INFF;
	dp[0][0] = 0;

	rep(i, N)rep(j, 1000001) {
			if (dp[i][j] == INFF) continue;
			dp[i + 1][j + v[i]] = min(dp[i][j] + w[i], dp[i + 1][j + v[i]]);
			dp[i + 1][j] = min(dp[i][j], dp[i + 1][j]);
	}

	ll ans = -1;
	rep(i, 1000100) if (dp[N][i] <= W) ans = i;
	printf("%lld\n", ans);

	return 0;
}