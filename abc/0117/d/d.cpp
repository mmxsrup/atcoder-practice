#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

ll f(const vector<ll>& a, ll x) {
	ll ret = 0;
	for (auto t : a)
		ret += x ^ t;
	return ret;
}

int main(int argc, char const *argv[])
{
	int n; ll k; cin >> n >> k;
	vector<ll> a(n); rep(i, n) cin >> a[i];

	ll x = 0; {
		for (int i = 40; i >= 0; --i) {
			if ((x | (1ll << i)) > k)
				continue;

			int cnt = 0;
			rep(j, n) {
				if (a[j] & (1ll << i))
					cnt++;
			}
			printf("cnt %d\n", cnt);
			if (cnt <= n / 2)
				x |= (1ll << i);
		}
	}
	cout << f(a, x) << endl;
	return 0;
}
