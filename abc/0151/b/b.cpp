#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[]) {
	int n, k, m; cin >> n >> k >> m;
	int sum = 0;
	rep(i, n - 1) {
		int a; cin >> a;
		sum += a;
	}

	int diff = m * n - sum;

	if (k < diff) {
		cout << -1 << endl;
	} else if (diff < 0) {
		cout << 0 << endl;
	} else {
		cout << diff << endl;
	}
	return 0;
}
