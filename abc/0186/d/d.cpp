#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	vector<long long> a(n); {
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
	}
	sort(a.begin(), a.end());
	reverse(a.begin(), a.end());

	long long ans = 0;
	for (int i = 0; i < n; ++i) {
		ans += a[i] * (n - i - 1) - a[i] * i;
	}
	cout << ans << endl;

	return 0;
}
