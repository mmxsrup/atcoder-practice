#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

const int MOD = 1e9 + 7;

int main(int argc, char const *argv[])
{
	int n, m; cin >> n >> m;
	vector<int> a(m); rep(i, m) cin >> a[i];
	set<int> st; rep(i, m) st.insert(a[i]);

	vector<int> dp(n + 1);
	dp[0] = 1;
	rep(i, n) {
		rep(j, 2) {
			int add = j + 1;
			if (i + add > n) continue;
			if (st.count(i + add)) continue;
			(dp[i + add] += dp[i]) %= MOD;
		}
	}
	printf("%d\n", dp[n]);

	return 0;
}
