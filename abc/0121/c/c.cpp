#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll INFF = 1e18;

int main(int argc, char const *argv[])
{
	int n, m; cin >> n >> m;
	vector<int> a(n), b(n); rep(i, n) cin >> a[i] >> b[i];

	vector<pair<ll, int>> v(n);
	rep(i, n) v[i] = make_pair(a[i], b[i]);
	sort(v.begin(), v.end());

	ll ans = 0;
	int cnt = m;
	rep(i, n) {
		int num = min(v[i].second, cnt);
		cnt -= num;
		ans += v[i].first * num;
	}
	printf("%lld\n", ans);
	return 0;
}