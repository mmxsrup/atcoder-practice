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

#define WHITE 0
#define BLACK 1

vector<int> g[100010];
ll dp[100010][2];

int dfs(int u, int p, int color) {
	if (dp[u][color] != -1) return dp[u][color];

	ll cnt = 1;
	for (auto v : g[u]) {
		if (p == v) continue;
		ll cntw = dfs(v, u, WHITE);
		ll cntb = dfs(v, u, BLACK);
		if (color == WHITE) cnt *= (cntw + cntb);
		else cnt *= cntw;
		cnt %= MOD;
	}
	return dp[u][color] = cnt;
}

int main(int argc, char const *argv[])
{
	int n; cin >> n;

	vector<int> x(n - 1), y(n - 1); {
		rep(i, n - 1) {
			cin >> x[i] >> y[i];
			x[i]--, y[i]--;
			g[x[i]].pb(y[i]); g[y[i]].pb(x[i]);
		}
	}

	rep(i, 100010)rep(j, 2) dp[i][j] = -1;
	ll ans = dfs(0, -1, WHITE) + dfs(0, -1, BLACK);

	printf("%lld\n", ans % MOD);
	return 0;
}
