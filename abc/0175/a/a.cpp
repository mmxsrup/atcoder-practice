#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(int argc, char const *argv[])
{
	string s; cin >> s;
	int ans = 0;
	int t = 0;
	for (int i = 0; i < s.size(); ++i) {
		t = (s[i] == 'R') ? t + 1 : 0;
		ans = max(ans, t);
	}
	cout << ans << endl;
	return 0;
}
