#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	vector<int> x(n); rep(i, n) cin >> x[i];

	int ans = (int)1e9;
	for (int i = 1; i <= 100; i++) {
		int cost = 0;
		rep(j, n) {
			cost += (x[j] - i) * (x[j] - i);
		}
		ans = min(ans, cost);
	}
	cout << ans << endl;
	return 0;
}
