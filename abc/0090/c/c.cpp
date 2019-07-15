#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	ll n, m; cin >> n >> m;
	if (n > m) swap(n, m);
	if (n == 1 and m == 1) {
		cout << 1 << endl;
	} else if (n == 1) {
		cout << m - 2 << endl;
	} else {
		cout << (n - 2) * (m - 2) << endl;
	}
	return 0;
}
