#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	ll a, b; cin >> a >> b;
	cout << a * b / __gcd(a, b) << endl;
	return 0;
}
