#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	vector<int> l(n);
	rep(i, n) cin >> l[i];
	sort(l.begin(), l.end());

	int ans = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = i + 1; j < n; ++j) {
			int len = l[i] + l[j];
			// printf("%d %d %d\n", i, j, len);
			// l[i + 2 ~ n - 1] < len
			ans += (lower_bound(l.begin(), l.end(), len) - l.begin() - 1) - j;
		}
	}
	cout << ans << endl;
	return 0;
}
