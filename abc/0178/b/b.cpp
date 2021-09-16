#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
	ll a, b, c, d; cin >> a >> b >> c >> d;
	cout << max(b * d, max(a * c, max(b * c, a * d))) << endl;
	return 0;
}
