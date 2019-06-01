#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)
#define reps(i,f,n) for(int i=(f);i<(n);i++)
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll INFF = 1e18;

int n, m;
vector<int> g[100010];

int check() {
	vector<int> d;
	rep(i, n) if (g[i].size() == 4) d.emplace_back(i);
	int start = d[0], end = d[1];
	int cnt_end = 0;
	vector<bool> used(n, 0);

	queue<int> que;
	que.push(start);
	used[start] = true;

	while(!que.empty()) {
		int u = que.front(); que.pop();
		for (auto v : g[u]) {
			if (v == end) {
				cnt_end++;
				continue;
			}
			if (used[v]) continue;
			used[v] = true;
			que.push(v);
		}
	}
	return cnt_end;
}

int main(int argc, char const *argv[])
{
	cin >> n >> m;
	vector<int> a(m), b(m);
	rep(i, m) cin >> a[i] >> b[i];
	rep(i, m) a[i]--, b[i]--;

	rep(i, m) g[a[i]].emplace_back(b[i]), g[b[i]].emplace_back(a[i]);

	int cnt2 = 0, cnt4 = 0, cnt6 = 0, other_odd = 0, other_even = 0;
	rep(i, n) {
		int d = g[i].size();
		if (d == 2) cnt2++;
		else if (d == 4) cnt4++;
		else if (d == 6) cnt6++;
		else if (d % 2 == 0) other_even++;
		else if (d % 2 == 1) other_odd++;
	}

	if (other_odd > 0) {
		printf("No\n");
		return 0;
	}

	if (cnt4 > 2 || cnt6 >= 1 || other_even >= 1) {
		printf("Yes\n");
	} else if (cnt4 == 2) {
		// assert(0);
		if (check() > 2) printf("No\n");
		else printf("Yes\n");
	} else {
		printf("No\n");
	}
	return 0;
}