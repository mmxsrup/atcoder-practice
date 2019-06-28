#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int r, d, x; cin >> r >> d >> x;
	for (int i = 0; i < 10; ++i) {
		x = r * x - d;
		cout << x << endl;
	}
	return 0;
}
