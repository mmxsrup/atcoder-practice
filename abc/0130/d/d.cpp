#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)


int main(int argc, char const *argv[]) {
	int n; ll k; cin >> n >> k;
	vector<int> a(n); rep(i, n) cin >> a[i];

	int r = 0;
	ll sum = 0;
	ll ans = 0;

	rep(l, n) {
		while (sum < k && r < n) sum += a[r++];
		if (sum < k) break;

		// a[l] + a[l + 1] .. a[r - 1] >= k
		// a[l] + a[l + 1] .. a[r] >= k
		// ...
		// a[l] + a[l + 1] .. a[n - 1] >= k

		// printf("l %d r %d\n", l, r);
		ans += (n - 1) - (r - 1) + 1;

		sum -= a[l];
	}

	printf("%lld\n", ans);
	return 0;
}
