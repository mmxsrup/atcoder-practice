#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

const ll INFF = 1e18;

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	vector<ll> a(n); rep(i, n) cin >> a[i];

	ll mina = INFF;
	rep(i, n) mina = min(mina, abs(a[i]));

	int mcnt = 0;
	rep(i, n) mcnt += (a[i] < 0) ? 1 : 0;

	ll sum = 0;
	rep(i, n) sum += abs(a[i]);

	cout << sum - ((mcnt % 2) ? 2 * mina : 0ll) << endl;

	return 0;
}
