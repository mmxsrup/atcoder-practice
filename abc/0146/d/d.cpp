#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	vector<int> a(n - 1), b(n - 1);
	vector<vector<int>> g(n);
	map<pair<int, int>, int> ma;
	rep(i, n - 1) {
		cin >> a[i] >> b[i];
		a[i]--, b[i]--;
		g[a[i]].push_back(b[i]), g[b[i]].push_back(a[i]);
		ma[make_pair(a[i], b[i])] = -1;
	}

	int ans = 0;
	rep(i, n) {
		ans = max(ans, (int)g[i].size());
	}
	cout << ans << endl;


	vector<int> used(n);
	vector<set<int>> usedc(n);
	queue<int> que;
	que.push(0);
	used[0] = 1;

	while (not que.empty()) {
		int u = que.front(); que.pop();
		int color = 1;
		for (auto v : g[u]) {
			if (used[v]) {
				continue;
			}
			if (ma[make_pair(min(u, v), max(u, v))] != -1) {
				continue;
			}
			while (usedc[u].count(color) || usedc[v].count(color)) {
				color++;
			}
			used[v] = 1;
			ma[make_pair(min(u, v), max(u, v))] = color;
			usedc[u].insert(color), usedc[v].insert(color);
			que.push(v);
		}
	}

	for (int i = 0; i < n - 1; ++i) {
		cout << ma[make_pair(a[i], b[i])] << endl;
	}
	return 0;
}
