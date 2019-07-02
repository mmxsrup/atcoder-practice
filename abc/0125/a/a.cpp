#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)


int main(int argc, char const *argv[])
{
	int a, b, t; cin >> a >> b >> t;
	int ans = 0;
	int now = a;
	while (now <= t) {
		ans += b;
		now += a;
	}
	cout << ans << endl;
	return 0;
}
