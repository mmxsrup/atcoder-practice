#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	string s; cin >> s;
	cout << (s[2] == s[3] and s[4] == s[5] ? "Yes" : "No") << endl;
	return 0;
}
