#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

ll MOD = 1e9 + 7;

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	vector<ll> c(n); {
		for (int i = 0; i < n; i++) {
			cin >> c[i];
		}
	}

	sort(c.begin(), c.end());

	ll ans = c[0];
	for (int i = 1; i < n; ++i) {
		ans *= max(0ll, c[i] - i);
		ans %= MOD;
	}
	cout << ans << endl;
	return 0;
}
