#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll MOD = 998244353;

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	vector<int> a(n); {
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
	}

	// dp[i][j] := i個目までの要素を消して、左端がjになる場合の数
	vector<vector<ll>> dp(n + 1, vector<ll>(10, 0));

	dp[1][a[0]] = 1;

	for (int i = 1; i < n; ++i) {
		for (int j = 0; j < 10; ++j) {
			if (dp[i][j] == 0) {
				continue;
			}

			dp[i + 1][(j + a[i]) % 10] += dp[i][j];
			dp[i + 1][(j + a[i]) % 10] %= MOD;

			dp[i + 1][(j * a[i]) % 10] += dp[i][j];
			dp[i + 1][(j * a[i]) % 10] %= MOD;
		}
	}

	for (int i = 0; i < 10; ++i) {
		cout << dp[n][i] << endl;
	}
	return 0;
}
