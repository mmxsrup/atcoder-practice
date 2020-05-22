#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int k, n; cin >> k >> n;
	vector<int> a(n); rep(i, n) cin >> a[i];

	int ans = k;
	rep(i, n) {
		int dist = abs(a[(i + 1) % n] - a[i]);
		int diff = min(k - dist, dist);
		ans = min(ans, k - diff);
	}
	cout << ans << endl;
	return 0;
}
