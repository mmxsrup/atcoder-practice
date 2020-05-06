#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

const ll INF = 1e18;

int main(int argc, char const *argv[])
{
	int h, n; cin >> h >> n;
	vector<int> a(n), b(n); rep(i, n) cin >> a[i] >> b[i];

	// dp[i][j] := i番目までの魔法を使って、
	// モンスターの大量をj減らすときに使う魔力の最小値
	vector<vector<ll>> dp(n + 1, vector<ll>(h + 1, INF));

	dp[0][0] = 0;
	rep(i, n) rep(j, h + 1) {
		// unused
		dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
		// used
		dp[i + 1][min(j + a[i], h)]
			= min(dp[i + 1][min(j + a[i], h)], dp[i + 1][j] + b[i]);
	}

	cout << dp[n][h] << endl;
	return 0;
}
