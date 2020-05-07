#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	string s, t; cin >> s >> t;
	int a, b; cin >> a >> b;
	string u; cin >> u;
	if (s == u) a--;
	else b--;
	cout << a << " " << b << endl;
	return 0;
}
