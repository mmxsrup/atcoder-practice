#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)


int main(int argc, char const *argv[])
{
	int n, k; cin >> n >> k;
	vector<int> v(n); rep(i, n) cin >> v[i];

	int ret = -100 * 50;
	rep(i, k + 1)rep(j, k + 1 - i) {
		if (i + j > n) continue;
		int other = k - (i + j);
		assert(other >= 0);

		vector<int> u;
		rep(t, i) u.push_back(v[t]);
		rep(t, j) u.push_back(v[n - 1 - t]);
		sort(u.begin(), u.end());
		int ans = accumulate(u.begin(), u.end(), 0);

		rep(t, min(other, (int)u.size())) {
			if (u[t] < 0) ans -= u[t];
			else break;
		}
		ret = max(ret, ans);
	}
	cout << ret << endl;

	return 0;
}
