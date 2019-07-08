#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	ll l, r; cin >> l >> r;
	ll ans = 2019;
	for (int i = l; i <= min(r, l + 2020); ++i) {
		for (int j = i + 1; j <= min(r, l + 2020); ++j) {
			ans = min(ans, (ll(i) * j) % 2019);
		}
	}
	cout << ans << endl;
	return 0;
}
