#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	ll n; cin >> n;
	int ans = 0;
	while (n > 0) {
		ans++;
		n /= 2;
	}
	cout << ans - 1 << endl;
	return 0;
}
