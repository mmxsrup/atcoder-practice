#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	vector<int> a(n); rep(i, n) cin >> a[i];
	vector<int> l(n); {
		l[0] = a[0];
		rep(i, n - 1) {
			l[i + 1] = max(l[i], a[i + 1]);
		}
	}
	vector<int> r(n); {
		r[n - 1] = a[n - 1];
		for (int i = n - 2; i >= 0; --i) {
			r[i] = max(r[i + 1], a[i]);
		}
	}
	rep(i, n) {
		int ans = 0;
		if (i != 0) ans = max(ans, l[i - 1]);
		if (i != n - 1) ans = max(ans, r[i + 1]);
		cout << ans << endl;
	}
	return 0;
}
