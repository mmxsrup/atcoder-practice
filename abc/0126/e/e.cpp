#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)


int used[100010];

void dfs(int u, const vector<vector<int>>& g) {
	used[u] = true;
	for (auto v : g[u]) {
		if (!used[v]) dfs(v, g);
	}
}

int main(int argc, char const *argv[])
{
	int n, m; cin >> n >> m;
	vector<int> x(m), y(m), z(m); rep(i, m) cin >> x[i] >> y[i] >> z[i];
	rep(i, m) x[i]--, y[i]--;

	vector<vector<int>> g(n);
	rep(i, m) {
		g[x[i]].push_back(y[i]);
		g[y[i]].push_back(x[i]);
	}
	int ans = 0;
	rep(i, n) {
		if (!used[i]) {
			ans++;
			dfs(i, g);
		}
	}
	printf("%d\n", ans);
	return 0;
}
