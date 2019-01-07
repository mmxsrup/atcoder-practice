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


ll imos[410];
ll dp[410][410];

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	vector<int> a(n); {
		rep(i, n) cin >> a[i];
	}
	rep(i, n) imos[i + 1] = imos[i] + a[i];

	rep(i, 410)rep(j, 410) dp[i][j] = INFF;
	rep(i, n) dp[i][i] = 0;

	reps(window, 2, n + 1)rep(i, n) {
		int l = i;
		int r = l + window - 1;
		for (int k = l; k < r; ++k) {
			if (dp[l][k] == INFF) continue;
			if (dp[k + 1][r] == INFF) continue;
			dp[l][r] = min(dp[l][r], dp[l][k] + dp[k + 1][r] + imos[r + 1] - imos[l]);
			// printf("dp[%d][%d](%lld) + dp[%d][%d](%lld) = %lld\n", l, k, dp[l][k], k + 1, r, dp[k + 1][r], dp[l][r]);
		}
	}

	printf("%lld\n", dp[0][n - 1]);
	return 0;
}
