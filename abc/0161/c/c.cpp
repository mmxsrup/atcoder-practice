#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	ll n, k; cin >> n >> k;
	ll t = n / k;
	cout << min(abs(n - t * k), abs(n - (t + 1) * k)) << endl;
	return 0;
}
