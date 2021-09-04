#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	vector<int> q(n); {
		for (int i = 0; i < n; ++i) {
			cin >> q[i];
			q[i]--;
		}
	}

	vector<int> ans(n); {
		for (int i = 0; i < n; ++i) {
			ans[q[i]] = i + 1;
		}
	}

	for (int i = 0; i < n; ++i) {
		cout << ans[i] << " ";
	}
	cout << endl;

	return 0;
}
