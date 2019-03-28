#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll INFF = 1e18;

int main(int argc, char const *argv[])
{
	int n, m, c; cin >> n >> m >> c;
	vector<int> b(m); rep(i, m) cin >> b[i];
	vector<vector<int>> a(n, vector<int>(m));
	rep(i, n)rep(j, m) cin >> a[i][j];

	int ans = 0;
	rep(i, n) {
		int sum = c;
		rep(j, m) sum += a[i][j] * b[j];
		if (sum > 0) ans++;
	}
	printf("%d\n", ans);
	return 0;
}