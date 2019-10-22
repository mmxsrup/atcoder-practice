#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	if (n % 2 == 0) {
		cout << 0.5 << endl;
	} else {
		int odd = (n + 1) / 2;
		cout << (double)odd / n << endl;
	}
	return 0;
}
