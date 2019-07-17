#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

ll sum(int n, const vector<ll>& v, ll d) {
	ll ret = 0;
	rep(i, n) {
		ret += abs(d - v[i]);
	}
	return ret;
}

ll solve(int n, const vector<ll>& v) {
	ll l = 0, r = (int)1e9 + 1;
	rep(i, 50) {
		ll m1 = (2 * l + r) / 3;
		ll m2 = (l + 2 * r) / 3;
		if (sum(n, v, m1) > sum(n, v, m2)) {
			l = m1;
		} else {
			r = m2;
		}
	}
	ll ret = -1, mi = (ll)1e18;
	for (ll i = l; i <= r; ++i) {
		if (sum(n, v, i) < mi) {
			mi = sum(n, v, i);
			ret = i;
		}
	}
	return ret;
}

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	vector<ll> a(n), b(n); rep(i, n) cin >> a[i] >> b[i];
	ll l = solve(n, a);
	ll r = solve(n, b);
	// printf("l %lld r %lld\n", l, r);

	ll ans = 0;
	rep(i, n) {
		ans += abs(l - a[i]) + (b[i] - a[i]) + abs(r - b[i]);
	}
	cout << ans << endl;
	return 0;
}
