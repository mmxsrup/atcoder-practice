#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)


int main(int argc, char const *argv[])
{
	int n, m; cin >> n >> m;
	vector<int> k(m); vector<vector<int>> s(m); {
		rep(i, m) {
			cin >> k[i];
			rep(j, k[i]) {
				int d; cin >> d; d--;
				s[i].emplace_back(d);
			}
		}
	}
	vector<int> p(m); rep(i, m) cin >> p[i];

	int ans = 0;
	for (int mask = 0; mask < (1 << n); ++mask) {
		bool flag = true;
		rep(i, m) {
			int on_cnt = 0;
			for (auto sw_idx : s[i]) {
				if (mask & (1 << sw_idx)) on_cnt++;
			}
			if (on_cnt % 2 != p[i]) flag = false;
		}
		if (flag) ans++;
	}
	cout << ans << endl;

	return 0;
}
