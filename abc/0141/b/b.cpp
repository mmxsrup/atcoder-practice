#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	string s; cin >> s;

	bool flag = true;
	rep(i, (int)s.size()) {
		if (i % 2 == 0) {
			if (not (s[i] == 'R' or s[i] == 'U' or s[i] == 'D'))
				flag = false;
		} else {
			if (not (s[i] == 'L' or s[i] == 'U' or s[i] == 'D'))
				flag = false;
		}
	}
	cout << (flag ? "Yes" : "No") << endl;
	return 0;
}
