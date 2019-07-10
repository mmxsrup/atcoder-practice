#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n, m; cin >> n >> m;
	vector<int> a(n); rep(i, n) cin >> a[i];
	sort(a.begin(), a.end()); reverse(a.begin(), a.end());

	rep(i, n) {
		m -= a[i];
		if (m <= 0) {
			printf("%d\n", i + 1);
			return 0;
		}
	}
	return 0;
}
