#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

bool check(ll n, ll m) {
	if (m == 0) return false;
	if (n / m == n % m) return true;
	return false;
}

int main(int argc, char const *argv[])
{
	ll n; cin >> n;
	// n = k(m + 1)
	set<ll> st;
	for (ll k = 1; k * k <= n; ++k) {
		if (n % k == 0) {
			ll m1 = n / k - 1;
			ll m2 = k - 1;
			if (check(n, m1)) st.insert(m1);
			if (check(n, m2)) st.insert(m2);
		}
	}
	ll ans = 0;
	for (auto u : st) ans += u;
	cout << ans << endl;
	return 0;
}
