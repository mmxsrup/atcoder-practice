#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n, k; cin >> n >> k;
	int ans = 0;
	while (n > 0) {
		n /= k;
		ans++;
	}
	cout << ans << endl;
	return 0;
}