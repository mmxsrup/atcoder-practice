#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n, k; cin >> n >> k;
	vector<int> t(n), d(n); rep(i, n) cin >> t[i] >> d[i];

	vector<pair<int, int>> v(n);
	rep(i, n) {
		v[i] = make_pair(t[i], -d[i]);
	}
	sort(v.begin(), v.end());

	vector<ll> vmax;
	vector<ll> vother;
	int prev = -1;
	for (auto tmp : v) {
		int t = tmp.first, d = -tmp.second;
		if (prev == t) {
			vother.push_back(d);
		} else {
			vmax.push_back(d);
			prev = t;
		}
	}

	sort(vmax.begin(), vmax.end()); reverse(vmax.begin(), vmax.end());
	sort(vother.begin(), vother.end()); reverse(vother.begin(), vother.end());

	ll ans = 0;
	rep(i, k + 1) {
		if (vmax.size() < i or vother.size() < k - i) continue;
		ll sum = accumulate(vmax.begin(), vmax.begin() + i, 0ll);
		sum += accumulate(vother.begin(), vother.begin() + k - i, 0ll);
		sum += (ll)i * i;
		ans = max(ans, sum);
	}
	cout << ans << endl;
	return 0;
}
