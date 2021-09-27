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
	ll x; cin >> x;

	ll b = accumulate(a.begin(), a.end(), 0ll);

	ll ans = x / b * n;
	ll sum = b * (x / b);

	printf("# %lld %lld\n", ans, sum);

	for (int i = 0; i < n; ++i) {
		ans++;
		sum += a[i];
		if (sum > x) {
			cout << ans << endl;
			break;
		}
	}
	return 0;
}
