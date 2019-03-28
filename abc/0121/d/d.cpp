#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll INFF = 1e18;

ll sumxor(ll x) {
	if (x % 4 == 0) return x;
	else if (x % 4 == 1) return 1;
	else if (x % 4 == 2) return x ^ 1;
	else return 0;
}

int main(int argc, char const *argv[])
{
	ll a, b; cin >> a >> b;
	printf("%lld\n", sumxor(b) ^ sumxor(a - 1));

	return 0;
}