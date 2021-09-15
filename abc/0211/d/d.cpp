#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll INF = 1e18;
const int MOD = 1e9 + 7;

int main() {
	int n, m; cin >> n >> m;
	vector<vector<int>> g(n, vector<int>());
	for (int i = 0; i < m; ++i) {
		int a, b; cin >> a >> b;
		a--; b--;
		g[a].push_back(b), g[b].push_back(a);
	}

	vector<ll> dist(n, INF);
	vector<ll> cnt(n, 0);
	queue<int> que;
	que.push(0);
	dist[0] = 0;
	cnt[0] = 1;

	while (!que.empty()) {
		int u = que.front(); que.pop();
		for (auto v : g[u]) {
			if (dist[v] == INF) {
				que.push(v);
				dist[v] = dist[u] + 1;
				cnt[v] = cnt[u];
			} else if (dist[v] == dist[u] + 1) {
				(cnt[v] += cnt[u]) %= MOD;
			}
		}
	}

	cout << cnt[n - 1] << endl;
	return 0;
}
