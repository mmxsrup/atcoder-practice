#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll MOD = 1e9 + 7;

ll powmod(ll x, ll y) {
	ll ret = 1;
	for (ll i = 0; i < y; ++i) {
		(ret *= x) %= MOD;
	}
	return ret;
}

int main(int argc, char const *argv[])
{
	ll n; cin >> n;
	ll ans = powmod(10, n) - powmod(9, n) - powmod(9, n) + powmod(8, n);
	cout << ans % MOD << endl;
	return 0;
}
