#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	vector<int> a(n); rep(i, n) cin >> a[i];
	
	ll x = 0;
	rep(i, n) {
		if (i % 2) x -= a[i];
		else x += a[i];
	}

	vector<int> ans(n);
	ans[0] = x / 2;
	rep(i, n - 1) {
		ans[i + 1] = a[i] - ans[i];
	}
	rep(i, n) printf("%d ", ans[i] * 2);
	printf("\n");
	return 0;
}
