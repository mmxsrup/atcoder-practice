#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	bool flag = true;
	rep(i, n) {
		int a; cin >> a;
		if (a % 2 == 0 and (a % 3 != 0 and a % 5 != 0)) {
			flag = false;
		}
	}
	cout << (flag ? "APPROVED" : "DENIED") << endl;
	return 0;
}
