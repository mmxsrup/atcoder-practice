#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int a[3][3]; rep(i, 3)rep(j, 3) cin >> a[i][j];
	int n; cin >> n;
	vector<int> b(n); rep(i, n) cin >> b[i];
	rep(i, n)rep(j, 3)rep(k, 3) {
		if (a[j][k] == b[i]) {
			a[j][k] = 0;
		}
	}

	bool flag = false;
	rep(i, 3) {
		if (a[i][0] == 0 and a[i][1] == 0 and a[i][2] == 0) {
			flag = true;
		}
		if (a[0][i] == 0 and a[1][i] == 0 and a[2][i] == 0) {
			flag = true;
		}
	}
	if (a[0][0] == 0 and a[1][1] == 0 and a[2][2] == 0) {
		flag = true;
	}
	if (a[0][2] == 0 and a[1][1] == 0 and a[2][0] == 0) {
		flag = true;
	}
	cout << (flag ? "Yes" : "No") << endl;
	return 0;
}
