#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

string gen(int c, int len) {
	string r;
	rep(i, len) {
		r += c + '0';
	}
	return r;
}

int main(int argc, char const *argv[])
{
	int a, b; cin >> a >> b;
	string s1 = gen(a, b), s2 = gen(b, a);
	cout << (s1 < s2 ? s1 : s2) << endl;
	return 0;
}
