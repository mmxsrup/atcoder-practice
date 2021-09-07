#include <iostream>
using namespace std;

bool solve(int a, int k) {
	bool flag = true;
	while (a != 0) {
		int d = a % k;
		if (d == 7) {
			flag = false;
		}
		a /= k;
	}
	return flag;
}

int main(int argc, char const *argv[])
{
	int n; cin >> n;

	int ans = 0;
	for (int i = 1; i <= n; ++i) {
		if (solve(i, 8) && solve(i, 10)) {
			ans++;
		}
	}

	cout << ans << endl;
	return 0;
}
