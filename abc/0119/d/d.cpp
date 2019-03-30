#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)
#define reps(i,f,n) for(int i=(f);i<(n);i++)
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll INFF = 1e18;

int main(int argc, char const *argv[])
{
	int a, b, q; cin >> a >> b >> q;
	vector<ll> s(a); rep(i, a) cin >> s[i];
	vector<ll> t(b); rep(i, b) cin >> t[i];
	vector<ll> x(q); rep(i, q) cin >> x[i];

	rep(i, q) {
		int idx0 = lower_bound(s.begin(), s.end(), x[i]) - s.begin();
		int idx1 = lower_bound(t.begin(), t.end(), x[i]) - t.begin();
		// printf("idx %d %d \n", idx0, idx1);
		ll ans = INFF;
		for (int j = max(0, idx0 - 1); j < min(a, idx0 + 2); ++j) {
			for (int k = max(0, idx1 - 1); k < min(b, idx1 + 2); ++k) {
				ans = min(ans, abs(x[i] - s[j]) + abs(s[j] - t[k]));
				ans = min(ans, abs(x[i] - t[k]) + abs(t[k] - s[j]));
			}
		}
		printf("%lld\n", ans);
	}
	return 0;
}