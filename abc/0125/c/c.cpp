#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)


int main(int argc, char const *argv[])
{
	int n; cin >> n;
	vector<int> a(n); rep(i, n) cin >> a[i];
	vector<int> left(n); {
		left[0] = a[0];
		rep(i, n - 1) left[i + 1] = __gcd(left[i], a[i + 1]);
	}
	vector<int> right(n); {
		right[n - 1] = a[n - 1];
		for (int i = n - 1; i >= 1; --i) {
			right[i - 1] = __gcd(right[i], a[i - 1]);
		}
	}

	int ans = 0;
	rep(i, n) {
		if (i == 0) {
			ans = max(ans, right[1]);
		} else if (i == n - 1) {
			ans = max(ans, left[n - 2]);
		} else {
			ans = max(ans, __gcd(left[i - 1], right[i + 1]));
		}
	}
	cout << ans << endl;

	return 0;
}
