#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	ll a, b, k; cin >> a >> b >> k;
	if (a + b <= k) {
		cout << "0 0" << endl;
	} else if (a <= k) {
		cout << "0 " << b - (k - a) << endl;
	} else {
		cout << a - k << " " << b << endl;
	}
	return 0;
}
