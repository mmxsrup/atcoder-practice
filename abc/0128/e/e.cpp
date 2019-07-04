#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n, q; cin >> n >> q;
	vector<int> s(n),t(n),x(n); rep(i, n) cin >> s[i] >> t[i] >> x[i];
	vector<int> d(q); rep(i, q) cin >> d[i];

	set<pair<int, int>> st; rep(i, q) st.insert(make_pair(d[i], i));

	vector<tuple<int, int, int>> v;
	rep(i, n) v.push_back(make_tuple(x[i], s[i] - x[i],t[i] - x[i]));
	sort(v.begin(), v.end());

	vector<int> ans(q, -1);
	rep(i, n) {
		int x, l, r; tie(x, l, r) = v[i];
		auto it = st.lower_bound(make_pair(l, -1)); // O(log q)
		while (it != st.end()) {
			if (it->first < r) {
				ans[it->second] = x;
				st.erase(it++);
			} else {
				break;
			}
		}
	}

	for (auto u : ans) {
		printf("%d\n", u);
	}

	return 0;
}
