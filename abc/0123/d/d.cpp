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
	int x, y, z, K; cin >> x >> y >> z >> K;
	vector<ll> a(x), b(y), c(z);
	rep(i, x) cin >> a[i];
	rep(i, y) cin >> b[i];
	rep(i, z) cin >> c[i];
	sort(a.begin(), a.end()); reverse(a.begin(), a.end());
	sort(b.begin(), b.end()); reverse(b.begin(), b.end());
	sort(c.begin(), c.end()); reverse(c.begin(), c.end());


	if (x * y * z < 3000) {
		vector<ll> cost(x * y * z);
		int idx = 0;
		rep(i, x)rep(j, y)rep(k, z) cost[idx++] = a[i] + b[j] + c[k];
		sort(cost.begin(), cost.end()); reverse(cost.begin(), cost.end());
		rep(i, K) printf("%lld\n", cost[i]);
	} else {
		vector<ll> cost(x * y);
		int idx = 0;
		rep(i, x)rep(j, y) cost[idx++] = a[i] + b [j];
		sort(cost.begin(), cost.end()); reverse(cost.begin(), cost.end());
		vector<ll> cost2(K * z);
		idx = 0;
		rep(i, K)rep(j, z) cost2[idx++] = cost[i] + c[j];
		sort(cost2.begin(), cost2.end()); reverse(cost2.begin(), cost2.end());
		rep(i, K) printf("%lld\n", cost2[i]);
	}

	return 0;
}