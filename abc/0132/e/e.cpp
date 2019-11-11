#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)


vector<int> g[300010];
bool used[300010];

int main(int argc, char const *argv[])
{
	int n, m; cin >> n >> m;
	vector<int> u(m), v(m); rep(i, m) cin >> u[i] >> v[i];
	rep(i, m) u[i]--, v[i]--;
	int s, t; cin >> s >> t;
	s--, t--;

	rep(i, m) {
		rep(j, 3)
			g[u[i] * 3 + j].push_back(v[i] * 3 + ((j + 1) % 3));
	}

	queue<pair<int, int>> q;
	q.push(make_pair(3 * s, 0));
	used[3 * s] = true;
	while (!q.empty()) {
		int d = q.front().first, cost = q.front().second;
		q.pop();

		if (d == 3 * t) {
			printf("%d\n", cost / 3);
			return 0;
		}
		for (auto nd : g[d]) {
			if (!used[nd]) {
				used[nd] = true;
				q.push(make_pair(nd, cost + 1));
			}
		}
	}
	printf("-1\n");
	return 0;
}
