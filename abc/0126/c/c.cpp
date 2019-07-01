#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n, k; cin >> n >> k;
	double ans = 0;
	for (int i = 1; i <= n; ++i) {
		double p = 1. / n;
		int score = i;
		while (score != 0 and score <= k - 1) {
			p *= 1. / 2;
			score *= 2;
		}
		ans += p;
	}
	printf("%.12f\n", ans);
	return 0;
}
