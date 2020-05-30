#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	ll ans = 0;
	for (int i = 1; i <= n; i++) {
		if (i % 3 == 0 or i % 5 == 0) continue;
		ans += i;
	}
	cout << ans << endl;
	return 0;
}
