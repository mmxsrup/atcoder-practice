#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n, x; cin >> n >> x;
	vector<int> v(n); {
		rep(i, n) {
			int t; cin >> t;
			v[i] = abs(x - t);
		}
	}

	int ans = 0;
	rep(i, n) ans = __gcd(ans, v[i]);
	cout << ans << endl;
	return 0;
}
