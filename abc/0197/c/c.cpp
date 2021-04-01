#include <vector>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	int n; cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	long long ans = 1e18;
	for (int mask = 0; mask < (1 << (n - 1)); ++mask) {
		long long sum = 0;
		long long sum_or = 0;
		for (int i = 1; i < n; ++i) {
			if (mask & (1 << (i - 1))) {
				sum ^= sum_or;
				sum_or = 0;
			}
			sum_or |= a[i];
		}
		sum ^= sum_or;
		ans = min(sum, ans);
	}
	cout << ans << endl;
	return 0;
}
