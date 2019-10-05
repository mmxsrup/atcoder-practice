#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int a, b; cin >> a >> b;
	int ans = 0;
	b--;
	while (b > 0) {
		b -= a - 1;
		ans++;
	}
	cout << ans << endl;
	return 0;
}
