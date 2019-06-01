#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	string s; cin >> s;
	int cnt = 0;
	for (auto u : s) {
		if (u == 'x') cnt++;
	}
	if (cnt > 7) printf("NO\n");
	else printf("YES\n");
	return 0;
}