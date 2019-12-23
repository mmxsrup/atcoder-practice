#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)


ll calc(ll a, ll b, ll n) {
	ll money = a * n + b * to_string(n).length();
	return money;
}

int main(int argc, char const *argv[])
{
	ll a, b, x; cin >> a >> b >> x;

	if (calc(a, b, 1) > x) {
		printf("0\n");
		return 0;
	}

	ll l = 1, r = 1000000001;
	while (r - l > 1) {
		ll m = (l + r) / 2;
		// cout << "m: " << m << " calc: " << calc(a, b, m) << endl;
		if (calc(a, b, m) <= x) {
			l = m;
		} else {
			r = m;
		}
	}
	cout << l << endl;
	return 0;
}
