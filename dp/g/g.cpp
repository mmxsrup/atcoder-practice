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

vector<int> g[100010];
int dp[100010];

int dfs(int u) {
	if (dp[u] != -1) return dp[u];
	// printf("u %d\n", u);
	int ans = 0;
	for (auto v : g[u]) {
		int d = dfs(v);
		ans = max(ans, d + 1);
	}
	// printf("ans %d\n", ans);
	return dp[u] = ans;
}

int main(int argc, char const *argv[])
{
	int n, m; cin >> n >> m;
	vector<int> x(m), y(m); {
		rep(i, m) {
			cin >> x[i]	 >> y[i];
			x[i]--, y[i]--;
		}
		rep(i, m) g[x[i]].pb(y[i]);
	}

	rep(i, 100010) dp[i] = -1;
	rep(i, n) dfs(i);

	int ans = 0;
	rep(i, n) ans = max(ans, dp[i]);
	printf("%d\n", ans);

	return 0;
}
