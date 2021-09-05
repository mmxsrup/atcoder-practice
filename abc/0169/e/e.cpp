#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	vector<int> a(n), b(n); {
		for (int i = 0; i < n; ++i) {
			cin >> a[i] >> b[i];
		}
	}

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	if (n % 2 == 0) {
		int ax = a[n / 2] + a[n / 2 - 1];
		int bx = b[n / 2] + b[n / 2 - 1];
		cout << bx - ax + 1 << endl;
	} else {
		cout << b[n / 2] - a[n / 2] + 1 << endl;
	}
	return 0;
}
