#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	int x = (double)n / 1.08;
	for (int i = max(x - 10, 0); i < x + 10; i++) {
		if ((int)(1.08 * i) == n) {
			cout << i << endl;
			return 0;
		}
	}
	cout << ":(" << endl;
	return 0;
}
