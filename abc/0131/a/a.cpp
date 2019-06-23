#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	string s; cin >> s;
	bool f = true;
	rep(i, 3) if (s[i] == s[i + 1]) f = false;
	printf("%s\n", f ? "Good" : "Bad");
	return 0;
}