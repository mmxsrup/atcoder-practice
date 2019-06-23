#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n, k; cin >> n >> k;
	int mx = (n - 1) * (n - 2) / 2;
	if (mx < k) {
		printf("-1\n");
		return 0;
	}

	int cnt  = mx - k;
	vector<pair<int, int>> g; // (u, v)
	for (int i = 1; i < n; ++i) {
		g.push_back(make_pair(0, i));
	}

	int add_cnt = 0;
	for (int i = 1; i < n; ++i) {
		for (int j = i + 1; j < n; ++j) {
			if (add_cnt < cnt) {
				g.push_back(make_pair(i, j));
				add_cnt++;
			}
		}
	}

	printf("%d\n", (int)g.size());
	for (auto d : g) {
		printf("%d %d\n", d.first + 1, d.second + 1);
	}

	return 0;
}
