#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	vector<int> a(n), b(n), c(n - 1);
	rep(i, n) {
		cin >> a[i]; a[i]--;
	}
	rep(i, n) cin >> b[i];
	rep(i, n - 1) cin >> c[i];

	int ans = 0;
	rep(i, n) {
		ans += b[a[i]];
		if (i != 0 && a[i - 1] + 1 == a[i])
			ans += c[a[i - 1]];
	}
	cout << ans << endl;
	return 0;
}
