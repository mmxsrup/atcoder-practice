#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n, x; cin >> n >> x;
	vector<int> l(n); rep(i, n) cin >> l[i];

	int d = 0;
	int ans = 1;
	rep(i, n) {
		d += l[i];
		if (d <= x) ans++;
	}
	printf("%d\n", ans);
	return 0;
}
