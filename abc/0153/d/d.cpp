#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	ll h; cin >> h;
	int cnt = 0;
	while (h > 1) {
		cnt++;
		h /= 2;
	}

	ll ans = 0;
	rep (i, cnt + 1) {
		ans += pow(2, i);
	}
	cout << ans << endl;
	return 0;
}
