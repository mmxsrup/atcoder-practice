#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int dp[100010];

int main(int argc, char const *argv[])
{
	int n; string s; cin >> n >> s;
	s = "#" + s; n++;
	dp[0] = 0;
	rep(i, n) {
		if (i + 1 > n) continue;
		dp[i + 1] = max(dp[i + 1], dp[i]);
		if (i + 2 > n) continue;
		if (s[i + 1] == 'O' && s[i + 2] == 'X') dp[i + 2] = max(dp[i + 2], dp[i] + 1);
		if (s[i + 1] == 'X' && s[i + 2] == 'O') dp[i + 2] = max(dp[i + 2], dp[i] + 1);
	}
	cout << dp[n] << endl;
	return 0;
}
