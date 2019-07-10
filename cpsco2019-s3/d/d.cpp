#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n; string s; cin >> n >> s;
	bool flag = true;
	if (s.front() != 'R' or s.back() != 'B') flag = false;

	rep(i, n - 1) {
		string t = s.substr(i, 2);
		if (t == "RB") flag = false;
		if (t == "GG") flag = false;
	}

	if (flag) printf("Yes\n");
	else printf("No\n");

	return 0;
}
