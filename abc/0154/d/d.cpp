#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n, k; cin >> n >> k;
	vector<int> p(n); rep(i, n) cin >> p[i];
	vector<double> e(n + 1); rep(i, n) e[i] = (1. + p[i]) / 2.;
	rep(i, n) e[i + 1] += e[i];
	double ans = 0;
	rep(i, n - k) {
		ans = max(ans, e[i + k] - e[i]);
	}
	printf("%.9f\n", ans);
	return 0;
}
