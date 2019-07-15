#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[]) {
	int n, k; cin >> n >> k;

	if (k == 0) {
		cout << (ll)n * n << endl;
		return 0;
	}

	ll ans = 0;
	for (int b = 1; b <= n; ++b) {
		// a = bp + rep

		/*
		for (int a = 1; a <= n; ++a) {
			int p = a / b;
			int r = a % b;
			printf("a:%d b:%d p:%d r:%d\n", a, b, p, r);
			if (r >= k) ans++;
		}
		*/

		int P = n / b;
		int R = n % b;	
		// r = ([0, 1, 2, .. , b - 1] * P) + ([0, 1, .. , R])
		ans += 	max((b - 1) - (k) + 1, 0) * P + max(R - k + 1, 0);
	}
	cout << ans << endl;
	return 0;
}
