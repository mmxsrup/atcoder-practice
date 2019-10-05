#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	string s, t; cin >> s >> t;
	int ans = 0;
	rep(i, 3) {
		ans += (s[i] == t[i]);
	}
	cout << ans << endl;
	return 0;
}
