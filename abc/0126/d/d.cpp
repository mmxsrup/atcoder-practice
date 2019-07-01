#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

const int INF = 1e9;

int dist[100010];

void dfs(int u, int p, const vector<vector<pair<int, int>>>& g) {
	for (auto t : g[u]) {
		int v = t.first, cost = t.second;
		if (v == p) continue;
		dist[v] = dist[u] + cost;
		dfs(v, u, g);
	}
}

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	vector<int> u(n - 1), v(n - 1), w(n - 1);
	rep(i, n - 1) {
		cin >> u[i] >> v[i] >> w[i];
		u[i]--; v[i]--;
	}

	vector<vector<pair<int, int>>> g(n);
	rep(i, n - 1) {
		g[u[i]].push_back(make_pair(v[i], w[i]));
		g[v[i]].push_back(make_pair(u[i], w[i]));
	}

	dist[0] = 0;
	dfs(0, -1, g);

	rep(i, n) printf("%d\n", (dist[i] % 2) ? 1 : 0);

	return 0;
}
