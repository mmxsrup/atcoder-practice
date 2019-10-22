#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n, k; cin >> n >> k;
	vector<int> h(n);
	rep(i, n) cin >> h[i];

	int ans = 0;
	rep(i, n) {
		if (h[i] >= k)
			ans++;
	}
	cout << ans << endl;
	return 0;
}
