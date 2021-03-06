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

int dp[100110][3];

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	vector<int> a(n), b(n), c(n); {
		rep(i, n) cin >> a[i] >> b[i] >> c[i];
	}

	rep(i, 100110)rep(j, 3) dp[i][j] = -1;
	dp[0][0] = dp[0][1] = dp[0][2] = 0;

	rep(i, n)rep(j, 3)rep(k, 3) {
		if (j == k) continue;
		if (dp[i][j] == -1) continue;
		int cost[3] = {a[i], b[i], c[i]};
		dp[i + 1][k] = max(dp[i][j] + cost[k], dp[i + 1][k]);
	}

	int ans = 0;
	rep(i, 3) ans = max(ans, dp[n][i]);
	printf("%d\n", ans);

	return 0;
}