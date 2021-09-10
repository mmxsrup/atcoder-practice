#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)


set<int> prime(int x) {
	set<int> p;
	for (int j = 2; j * j <= x; ++j) {
		while (x % j == 0) {
			p.insert(j);
			x /= j;
		}
	}
	if (x != 1) {
		p.insert(x);
	}
	return p;
}

int main(int argc, char const *argv[])
{
	int n, m; cin >> n >> m;

	vector<int> memo(100010, 1);

	for (int i = 0; i < n; ++i) {
		int a; cin >> a;
		auto p = prime(a);
		for (auto u : p) {
			if (memo[u] == 1) {
				for (int j = u; j <= m; j += u) {
					memo[j] = 0;
				}
			}
		}
	}

	vector<int> ans;
	for (int i = 1; i <= m; ++i) {
		if (memo[i]) {
			ans.push_back(i);
		}
	}

	cout << ans.size() << endl;
	for (auto u : ans) {
		cout << u << endl;
	}
	
	return 0;
}
