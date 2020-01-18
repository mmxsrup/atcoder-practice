#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int dp[30010][4][1000];

int main(int argc, char const *argv[])
{
	int n; string s; cin >> n >> s;
	rep(i, 30010)rep(j, 4)rep(k, 1000) dp[i][j][k] = 0;
	dp[0][0][0] = 1;

	rep(i, n)rep(j, 4)rep(k, 1000) {
		if (not dp[i][j][k]) continue;
		// select
		if (j < 3) {
			dp[i + 1][j + 1][k * 10 + (s[i] - '0')] = 1;
		}
		// not select
		dp[i + 1][j][k] = 1;
	}

	int ans = 0;
	rep(k, 1000) ans += dp[n][3][k];
	cout << ans << endl;
	return 0;
}
