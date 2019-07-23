#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int r, g, b, n; cin >> r >> g >> b >> n;
	int ans = 0;
	rep(i, n + 1) rep(j, n + 1) {
		int sum = r * i + g * j;
		int nokori = n - sum;
		if (nokori < 0) continue;
		// printf("nokori %d\n", nokori);
		if (nokori % b == 0) ans++;
	}
	cout << ans << endl;
	return 0;
}
