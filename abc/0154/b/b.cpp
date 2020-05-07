#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	string s; cin >> s;
	rep(i, (int)s.size()) {
		s[i] = 'x';
	}
	cout << s << endl;
	return 0;
}
