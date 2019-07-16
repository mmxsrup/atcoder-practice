#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

//x^k mod
long long powmod(long long x, long long k, long long m){ // 繰り返し二乗法(logk)
	if(k == 0) return 1;
	if(k % 2 == 0) return powmod(x * x % m, k / 2, m);
	else return x * powmod(x, k - 1, m) % m;
}

const int mod = (int)1e9 + 7;

int main(int argc, char const *argv[])
{
	ll n; cin >> n;
	cout << (8 * powmod(5, n - 1, mod)) % mod << endl;
	return 0;
}
