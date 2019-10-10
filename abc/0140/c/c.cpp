#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	vector<int> b(n - 1);
	rep(i, n - 1) cin >> b[i];

	int ans = b.front() + b.back();
	for (int i = 1; i < n - 1; ++i) {
		ans += min(b[i - 1], b[i]);
	}
	cout << ans << endl;
	return 0;
}
