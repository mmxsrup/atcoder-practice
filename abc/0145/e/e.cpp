#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)


// i番目までみて, 時間をjまで使うときの、満足のMAX
ll dp[3010][6010];

int main(int argc, char const *argv[])
{
	int n; ll t; cin >> n >> t;
	vector<pair<ll, ll>> v;
	rep(i, n) {
		int t1, t2; cin >> t1 >> t2;
		v.push_back(make_pair(t1, t2));
	}
	sort(v.begin(), v.end());

	vector<ll> a(n), b(n);
	rep(i, n) {
		a[i] = v[i].first;
		b[i] = v[i].second;
	}

	rep(i, 3010)rep(j, 6010) dp[i][j] = -1;
	dp[0][0] = 0;

	rep(i, n) {
		rep(j, t) {
			if (dp[i][j] == -1)
				continue;
			// select
			dp[i + 1][j + a[i]] = max(dp[i + 1][j + a[i]], dp[i][j] + b[i]);

			// not selcet
			dp[i + 1][j] = max(dp[i][j], dp[i + 1][j]);
		}
	}

	ll ans = 0;
	rep(i, 3010)rep(j, 6010)
		ans = max(ans, dp[i][j]);
	cout << ans << endl;

	return 0;
}
