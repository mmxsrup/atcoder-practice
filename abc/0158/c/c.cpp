#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int a, b; cin >> a >> b;
	int ans = -1;
	rep(i, 10000) {
		if ((int)(i * 0.08) == a and (int)(i * 0.1) == b) {
			ans = i;
			break;
		}
	}
	cout << ans << endl;
	return 0;
}
