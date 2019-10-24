#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

#define INF 1e9

int dp[1010][5000];

int make_bitmask(const vector<int>& c) {
	int mask = 0;
	for (int i = 0; i < (int)c.size(); ++i) {
		mask |= (1 << c[i]);
	}
	return mask;
}

int main(int argc, char const *argv[])
{
	int n, m; cin >> n >> m;
	vector<int> a(m), b(m);
	vector<vector<int>> c(m);
	rep(i, m) {
		cin >> a[i] >> b[i];
		rep(j, b[i]) {
			int d; cin >> d;
			d--;
			c[i].emplace_back(d);
		}
	}
	rep(i, 1010) rep(j, 5000) dp[i][j] = INF;
	dp[0][0] = 0;
	rep(i, m) {
		int mask = make_bitmask(c[i]);
		rep(j, 5000) {
			if (dp[i][j] == INF)
				continue;
			// printf("i %d j %d mask %d\n", i, j, mask);
			if (j == (j | mask)) {
				dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
			} else {
				// select
				dp[i + 1][j | mask] = min(dp[i + 1][j | mask], dp[i][j] + a[i]);
				// not select
				dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
			}
		}
	}
	printf("%d\n", dp[m][(1 << n) - 1] != INF ?
				   dp[m][(1 << n) - 1] : -1);
	return 0;
}
