#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	vector<pair<int, int>> v; set<pair<int, int>> st; {
		for (int i = 0; i < n; ++i) {
			int x, y; cin >> x >> y;
			v.push_back(make_pair(x, y));
			st.insert(make_pair(x, y));
		}
		sort(v.begin(), v.end());
	}

	int ans = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (v[i].first < v[j].first && v[i].second < v[j].second) {
				if (st.count(make_pair(v[j].first, v[i].second)) == 1 &&
					st.count(make_pair(v[i].first, v[j].second)) == 1) {
					ans++;
				}
			}
		}
	}
	cout << ans << endl;
	return 0;
}
