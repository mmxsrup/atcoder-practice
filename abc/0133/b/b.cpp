#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n, d; cin >> n >> d;
	vector<vector<int>> x(n, vector<int>(d));
	rep(i, n) rep(j, d) cin >> x[i][j];

	int ans = 0;
	rep(i, n) rep(j, n) {
		if (i >= j) continue;
		int sum = 0;
		rep(k, d) sum += pow(abs(x[i][k] - x[j][k]), 2);
		bool check = false;
		// cout << "sum:" << sum << endl;
		rep(k, 10000) if (sum == k * k) check = true;
		if (check) ans++;
	}
	cout << ans << endl;
	return 0;
}
