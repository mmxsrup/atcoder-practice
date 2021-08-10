#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int n, m; cin >> n >> m;
	vector<int> a(n), b(m); {
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < m; i++) {
			cin >> b[i];
		}
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
	}

	int ans = 1e9;
	int b_idx = 0;
	for (int a_idx = 0; a_idx < n; ++a_idx) {
		while (b_idx < m - 1 && b[b_idx] <= a[a_idx]) {
			b_idx++;
		}
		// printf("%d %d\n", a_idx, b_idx);
		if (b_idx != 0) {
			ans = min(ans, abs(a[a_idx] - b[b_idx - 1]));
		}
		ans = min(ans, abs(a[a_idx] - b[b_idx]));
	}
	cout << ans << endl;
	return 0;
}
