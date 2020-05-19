#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

bool check(const string s) {
	// cout << s << endl;
	int n = s.size();
	bool flag = true;
	rep(i, n / 2) {
		if (s[i] != s[n - i - 1]) {
			flag = false;
		}
	}
	return flag;
}

int main(int argc, char const *argv[])
{
	string s; cin >> s;
	int n = s.size();
	bool flag = check(s) & check(s.substr(0, (n - 1) / 2)) & check(s.substr((n + 3) / 2 - 1));
	cout << (flag ? "Yes" : "No") << endl;
	return 0;
}
