#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	vector<ll> a(n + 1), b(n);
	rep(i, n + 1) cin >> a[i];
	rep(i, n) cin >> b[i];

	ll ans = 0;
	rep(i, n) {
		// i
		ll d1 = min(a[i], b[i]);
		ans += d1;
		a[i] -= d1;
		b[i] -= d1;
		// i + 1
		ll d2 = min(a[i + 1], b[i]);
		ans += d2;
		a[i + 1] -= d2;
		b[i] -= d2;
	}
	cout << ans << endl;
	return 0;
}
