#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(int argc, char const *argv[])
{
	ll x, k, d; cin >> x >> k >> d;
	x = abs(x);

	ll cnt = x / d, r = x % d;

	if (cnt > k) {
		cout << x - d * k << endl;
		return 0;
	}

	if ((k - cnt) % 2 == 0) {
		cout << r << endl;
	} else {
		cout << d - r << endl;
	}

	return 0;
}
