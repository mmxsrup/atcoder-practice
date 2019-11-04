#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

const ll INFF = 1e18;

ll solve(ll x) {
	ll ans = INFF;
	for (ll i = 1; i <= 1000000; ++i) {
		if (x % i != 0)
			continue;
		ll j = x / i;
		ans = min(ans, i + j - 2);
	}
	return ans;
}

int main(int argc, char const *argv[])
{
	ll n; cin >> n;
	cout << solve(n) << endl;
	return 0;
}
