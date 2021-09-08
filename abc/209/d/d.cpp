#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

void dfs(int u, int p, vector<vector<int>> &g, vector<int> &dist) {
	for (auto v : g[u]) {
		if (v != p) {
			dist[v] = dist[u] + 1;
			dfs(v, u, g, dist);
		}
	}
}

int main(int argc, char const *argv[])
{
	int n, q; cin >> n >> q;

	vector<vector<int>> g(n, vector<int>()); {
		for (int i = 0; i < n - 1; ++i) {
			int a, b; cin >> a >> b;
			g[a - 1].push_back(b - 1);
			g[b - 1].push_back(a - 1);
		}
	}

	vector<int> dist(n, 0);
	dfs(0, -1, g, dist);

	for (int i = 0; i < q; ++i) {
		int c, d; cin >> c >> d;
		if ((dist[c - 1] + dist[d - 1]) % 2 == 0) {
			cout << "Town" << endl;
		} else {
			cout << "Road" << endl;
		}
	}

	return 0;
}
