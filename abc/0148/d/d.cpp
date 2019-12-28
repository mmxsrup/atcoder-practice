#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	vector<int> a(n);
	rep(i, n) cin >> a[i];

	int target = 1;
	rep(i, n) {
		if (a[i] == target) {
			target++;
		}
	}
	if (target == 1) {
		cout << -1 << endl;
	} else {
		cout << n - target + 1 << endl;
	}
	return 0;
}
