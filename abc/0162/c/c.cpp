#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int k; cin >> k;
	int ans = 0;
	for (int a = 1; a <= k; a++) {
		for (int b = 1; b <= k; b++) {
			for (int c = 1; c <= k; c++) {
				ans += __gcd(a, __gcd(b, c));
			}
		}
	}
	cout << ans << endl;
	return 0;
}
