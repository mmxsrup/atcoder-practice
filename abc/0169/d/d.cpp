#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	long long n; cin >> n;
	long long ans = 0;

	for (long long int i = 2; i <= 1000000; ++i) {
		int cnt = 0;
		while (n % i == 0) {
			cnt++;
			n /= i;
		}

		int use = 1;
		while(cnt >= use) {
			cnt -= use;
			use++;
			ans++;
		}
	}

	if (n > 1) {
		ans++;
	}

	cout << ans << endl;
	return 0;
}
