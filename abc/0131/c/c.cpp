#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

ll solve(ll x, ll c, ll d) {
	ll lcm = (c * d) / __gcd(c, d);
	ll cnt_c = x / c;
	ll cnt_d = x / d;
	ll cnt_lcm = x / lcm;
	ll cnt_cd = cnt_c + cnt_d - cnt_lcm;
	return x - cnt_cd;
}

int main(int argc, char const *argv[])
{
	ll a, b, c, d; cin >> a >> b >> c >> d;
	printf("%lld\n", solve(b, c, d) - solve(a - 1, c, d));
	return 0;
}
