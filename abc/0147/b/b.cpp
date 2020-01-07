#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	string s; cin >> s;
	int n = s.size(), ans = 0;
	for (int i = 0; i < n / 2; i++) {
		if (s[i] != s[n - i - 1])
			ans++;
	}
	cout << ans << endl;
	return 0;
}
