#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	vector<ll> a(n); {
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
	}

	ll ans = 0;
	for (int i = 0; i < n - 1; ++i) {
		if (a[i] > a[i + 1]) {
			ans += a[i] - a[i + 1];
			a[i + 1] = a[i];
		}
	}
	cout << ans << endl;
	return 0;
}
