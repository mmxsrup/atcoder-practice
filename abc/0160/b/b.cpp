#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int x; cin >> x;
	int ans = 0;
	while(x >= 500) {
		ans += 1000;
		x -= 500;
	}
	while (x >= 5) {
		ans += 5;
		x -= 5;
	}
	cout << ans << endl;
	return 0;
}
