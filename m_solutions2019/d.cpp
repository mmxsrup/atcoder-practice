#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)


vector<int> g[100010];

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	vector<int> a(n), b(n);
	vector<int> c(n);
	rep(i, n - 1) {
		cin >> a[i] >> b[i];
		a[i]--; b[i]--;
	}
	rep(i, n) cin >> c[i];
	sort(c.begin(), c.end());
	reverse(c.begin(), c.end());

	rep(i, n - 1) {
		g[a[i]].push_back(b[i]);
		g[b[i]].push_back(a[i]);
	}

	set<pair<int, int>> used;
	vector<int> ans(n, -1);

	queue<int> que;
	que.push(0);
	ans[0] = c[0];
	int idx = 1;
	while(!que.empty()) {
		int u = que.front(); que.pop();
		for (auto v : g[u]) {
			if (ans[v] != -1) continue;
			que.push(v);
			ans[v] = c[idx++];
		}
	}

	int score = 0;
	for (int i = 1; i < n; ++i) {
		score += c[i];
	}
	printf("%d\n", score);

	for (int i = 0; i < n; ++i) {
		printf("%d ", ans[i]);
	}
	printf("\n");
	return 0;
}