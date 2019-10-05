#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

void dfs(int u, int p, vector<vector<int>>& g, vector<int>& cnt) {
	for (auto v : g[u]) {
		if (v == p)
			continue;
		// printf("u %d v %d\n", u, v);
		cnt[v] += cnt[u];
		dfs(v, u, g, cnt);
	}
}

int main(int argc, char const *argv[])
{
	int n, q; cin >> n >> q;
	vector<int> a(n), b(n);
	rep(i, n - 1) {
		cin >> a[i] >> b[i];
		a[i]--; b[i]--;
	}
	vector<int> p(q), x(q);
	rep(i, q) {
		cin >> p[i] >> x[i];
		p[i]--;
	}

	vector<vector<int>> g(n);
	rep(i, n - 1) {
		g[a[i]].emplace_back(b[i]);
		g[b[i]].emplace_back(a[i]);
	}

	vector<int> cnt(n);
	rep(i, q) {
		cnt[p[i]] += x[i];
	}

	dfs(0, -1, g, cnt);

	for (auto t : cnt)
		cout << t << " ";
	cout << endl;

	return 0;
}
