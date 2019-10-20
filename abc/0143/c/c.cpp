#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	string s; cin >> s;
	int ans = 0;
	char prev = '?';
	for (auto c : s) {
		if (prev != c)
			ans++;
		prev = c;
	}
	cout << ans << endl;
	return 0;
}
