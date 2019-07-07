#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int a, b, c; cin >> a >> b >> c;
	int coin = 0;
	int d = 0;
	while (coin < c) {
		d++;
		coin += a;
		if (d % 7 == 0) coin += b;
	}
	cout << d << endl;
	return 0;
}
