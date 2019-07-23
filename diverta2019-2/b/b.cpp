#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	vector<int> x(n), y(n); rep(i, n) cin >> x[i] >> y[i];

	int ans = n;
	rep(i, n) rep(j, n) {
		if (i == j) continue;
		int p = x[i] - x[j];
		int q = y[i] - y[j];
		int cost = 0;
		rep(k, n) rep(l, n) {
			if (x[l] - x[k] == p and y[l] - y[k] == q) cost++;
		}
		ans = min(ans, n - cost);
	}
	cout << ans << endl;
	return 0;
}
