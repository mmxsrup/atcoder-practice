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
	ll n; cin >> n;
	vector<ll> v;
	rep(i, 5) {
		ll d; cin >> d;
		v.emplace_back(d);
	}
	sort(v.begin(), v.end());

	ll min = v.front();
	ll time = (n + min - 1) / min;
	ll ans = time + 4;
	printf("%lld\n", ans);
	return 0;
}