#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	vector<int> w(n); rep(i, n) cin >> w[i];

	int ans = 100 * 100;
	rep(i, n - 1) {
		int sum1 = 0, sum2 = 0;
		rep(j, n) {
			if (j <= i) sum1 += w[j];
			else sum2 += w[j];
		}
		ans = min(ans, abs(sum1 - sum2));
	}
	printf("%d\n", ans);
	return 0;
}
