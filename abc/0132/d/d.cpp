#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

const int MOD = 1e9 + 7;

const int MAX_N = 2000000;
ll inv[MAX_N + 10];
ll fac[MAX_N + 10], facInv[MAX_N + 10];
class MATH{
public:
	MATH(){
		inverse();
		factroial();
	}
	ll nCk(ll n, ll k){// n! / k!*(n-k)!
		// cout << "nCk " << n << " " << k << endl;
		if(k < 0 || k > n) return 0;
		ll ret = fac[n];
		(ret *= facInv[k]) %= MOD;
		(ret *= facInv[n - k]) %= MOD;
		return ret;
	}
	ll nHk(ll n, ll k){// nHk = n+k-1 C k = (n+k-1)! / k! * (n-1)!
		if(n == 0 && k == 0) return 1;
		ll ret = fac[n + k - 1];
		(ret *= facInv[k]) %= MOD;
		(ret *= facInv[n - 1]) %= MOD;
		return ret;
	}
	ll nPk(ll n, ll k){//nPk = n! / (n-k)!
		if(k < 0 || k > n) return 0;
		ll ret = fac[n];
		(ret *= facInv[n - k]) %= MOD;
		return ret;
	}
private:
	void inverse(void){
		inv[1] = 1;
		for (int i = 2; i <= MAX_N; ++i){
			// inv[i] = MOD - (MOD / i) * inv[MOD % i] % MOD;
			inv[i] = inv[MOD % i] * (MOD - MOD / i) % MOD;
		}
	}
	void factroial(void){
		fac[0] = facInv[0] = 1;
		for (int i = 1; i <= MAX_N; ++i){
			fac[i] = (fac[i - 1] * i) % MOD;
			facInv[i] = (facInv[i - 1] * inv[i]) % MOD;
		}
	}
};

int main(int argc, char const *argv[])
{
	int n, k; cin >> n >> k;
	MATH ma;
	int b = k, r = n - k;

	for (int i = 1; i <= k; ++i) { // b を i 個にわける
		ll numb = ma.nCk(b - 1, i - 1); // bをi個に分ける (空なし)
		ll numr = ma.nCk(r - (i - 1) + i, i); // r - (i - 1) を i+1 個に分ける (空あり)
		cout <<  (numb * numr) % MOD << endl;
	}
	return 0;
}
