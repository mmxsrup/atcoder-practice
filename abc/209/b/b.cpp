#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n, x; cin >> n >> x;

	int sum = 0;
	for (int i = 0; i < n; ++i) {
		int a; cin >> a;
		if (i % 2 == 0) {
			sum += a;
		} else {
			sum += a - 1;
		}
	}

	cout << (sum <= x ? "Yes" : "No") << endl;
	return 0;
}
