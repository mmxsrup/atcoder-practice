#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	long long int inf = 1e18;

	vector<long long int> a(n); {
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
	}

	sort(a.begin(), a.end());

	if (a[0] == 0) {
		cout << "0" << endl;
		return 0;
	}

	long long int mul = 1;
	for (int i = 0; i < n; i++) {
		if (inf / mul >= a[i]) { // inf >= a[i] * mul
			mul *= a[i];
		} else {
			cout << "-1" << endl;
			return 0;
		}
	}

	cout << mul << endl;
	return 0;
}
