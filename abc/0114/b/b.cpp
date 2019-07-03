#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	string s; cin >> s;
	int ans = 1000;
	rep(i, s.size() - 2) {
		int d = stoi(s.substr(i, 3));
		ans = min(ans, abs(753 - d));
	}
	cout << ans << endl;
	return 0;
}
