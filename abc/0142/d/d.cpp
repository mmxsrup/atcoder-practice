#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

bool isprime(ll x) {
	for (ll i = 2; i * i <= x; ++i) {
		if (x % i == 0)
			return false;
	}
	return true;
}

int main(int argc, char const *argv[])
{
	ll a, b; cin >> a >> b;
	ll gcd = __gcd(a, b);
	set<ll> prime;

	for (ll i = 1; i * i <= gcd; ++i) {
		if (gcd % i == 0) {
			// cout << i << " " << gcd / i << endl;
			if (isprime(i))
				prime.insert(i);
			if (isprime(gcd / i))
				prime.insert(gcd / i);
		}
	}
	// for (auto u : prime) cout << u << endl;
	cout << prime.size() << endl;
	return 0;
}
