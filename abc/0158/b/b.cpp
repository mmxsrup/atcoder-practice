#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	ll n, a, b; cin >> n >> a >> b;
	cout << n / (a + b) * a + min(a, n % (a + b)) << endl;
	return 0;
}
