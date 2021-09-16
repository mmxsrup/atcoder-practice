#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll MOD = 1e9 + 7;

int main(int argc, char const *argv[])
{
	int s; cin >> s;
	int ans = 0;

	for (int g = 1; g < 1000; ++g) {
		int need = 3 * g;
		if (need > s) {
			break;
		}
		int amari = s - need;

		// (amari + g)! / amari! g!
		
	}
	cout << ans << endl;
	return 0;
}
