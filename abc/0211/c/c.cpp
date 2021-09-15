#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const int MOD = 1e9 + 7;

int main() {
	string s; cin >> s;
	vector<vector<ll>> dp(s.size() + 1, vector<ll>(9, 0));
	dp[0][0] = 1;

	for (int i = 0; i < (int)s.size(); ++i) {
		const string str = "chokudai";
		for (int j = 0; j < 8; ++j) {
			if (dp[i][j] == 0) {
				continue;
			}

			if (s[i] == str[j]) {
				(dp[i + 1][j + 1] += dp[i][j]) %= MOD;
				(dp[i + 1][j] += dp[i][j]) %= MOD;
			} else {
				(dp[i + 1][j] += dp[i][j]) %= MOD;
			}
		}
	}

	ll ans = 0;
	for (int i = 0; i <= (int)s.size(); ++i) {
		(ans += dp[i][8]) %= MOD;
	}
	cout << ans << endl;
	return 0;
}
