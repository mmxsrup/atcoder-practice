#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	string s; cin >> s;
	if (n % 2 == 1) {
		printf("No\n");
		return 0;
	}

	string s1 = s.substr(0, n / 2);
	string s2 = s.substr(n / 2, n / 2);
	if (s1 == s2)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}
