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

ll dp[110][100010];

int main(int argc, char const *argv[])
{
	int N, W; cin >> N >> W;
	vector<int> w(N), v(N); {
		rep(i, N) cin >> w[i] >> v[i];
	}

	rep(i, 110) rep(j, 100010) dp[i][j] = -1;
	dp[0][0] = 0;

	rep(i, N)rep(j, W) {
			if (dp[i][j] == -1) continue;
			if (j + w[i] <= W) dp[i + 1][j + w[i]] = max(dp[i][j] + v[i], dp[i + 1][j + w[i]]);
			dp[i + 1][j] = max(dp[i][j], dp[i + 1][j]);
	}

	ll ans = 0;
	rep(i, W + 1) ans = max(ans, dp[N][i]);
	printf("%lld\n", ans);

	return 0;
}