#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	vector<pair<int, int>> a(n); {
		for (int i = 0; i < n; ++i) {
			int t; cin >> t;
			a[i] = make_pair(t, i + 1);
		}
	}
	sort(a.begin(), a.end());
	cout << a[n - 2].second << endl;
	return 0;
}
