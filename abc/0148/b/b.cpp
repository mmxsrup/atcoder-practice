#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	string s, t; cin >> s >> t;	
	string ans;
	rep(i, n) {
		ans += s[i];
		ans += t[i];
	}
	cout << ans << endl;
	return 0;
}
