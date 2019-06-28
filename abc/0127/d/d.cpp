#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n, m; cin >> n >> m;
	vector<int> a(n); rep(i, n) cin >> a[i];
	vector<int> b(m), c(m); rep(i, m) cin >> b[i] >> c[i];

	sort(a.begin(), a.end()); reverse(a.begin(), a.end());

	vector<pair<int, int>> v; rep(i, m) v.push_back(make_pair(c[i], b[i]));
	sort(v.begin(), v.end()); reverse(v.begin(), v.end());

	vector<int> vc; {
		int idx = 0;
		while(vc.size() < n && idx < m) {
			if (v[idx].second > 0) {
				vc.push_back(v[idx].first);
				v[idx].second--;
			} else {
				idx++;
			}
		}
		while (vc.size() < n) vc.push_back(0);
		sort(vc.begin(), vc.end());

		// for (auto u : vc) printf("%d ", u);
		// printf("\n");
	}

	ll ans = 0;
	rep(i, n) {
		ans += max(a[i], vc[i]);
	}
	cout << ans << endl;
	return 0;
}
