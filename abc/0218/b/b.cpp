#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	string ans = "";
	for (int i = 0; i < 26; ++i) {
		int p; cin >> p;
		ans += (char)(p - 1 + 'a');
	}
	cout << ans << endl;
	return 0;
}
