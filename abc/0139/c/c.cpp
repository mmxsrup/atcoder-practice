#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	vector<int> h(n); rep(i, n) cin >> h[i];

	int ans = 0, cnt = 0;
	for (int i = 0; i < n - 1; ++i) {
		cnt++;
		if (h[i] < h[i + 1])
			cnt = 0;
		ans = max(ans, cnt);
	}

	cout << ans << endl;
	return 0;
}
