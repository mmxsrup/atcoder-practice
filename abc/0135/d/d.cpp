#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

static const ll MOD = (int)1e9 + 7;

ll dp[100010][13];

int main(int argc, char const *argv[])
{
	string s; cin >> s;

	dp[0][0] = 1;

	rep(i, (int)s.size()) {
		if (s[i] == '?') {
			rep(j, 13) {
				rep(k, 10) { // ? にいれる数
					(dp[i + 1][(j * 10 + k) % 13] += dp[i][j]) %= MOD;
				}
			}
		} else {
			int k = s[i] - '0';
			rep(j, 13) {
				(dp[i + 1][(j * 10 + k) % 13] += dp[i][j]) %= MOD;
			}
		}
	}
	cout << dp[(int)s.size()][5] << endl;
	return 0;
}
