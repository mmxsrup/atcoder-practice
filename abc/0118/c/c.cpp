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
	int n; cin >> n;
	vector<int> a(n); rep(i, n) cin >> a[i];
	sort(a.begin(), a.end());
	int gcd = a[0]; reps(i, 1, n) gcd = __gcd(gcd, a[i]);
	printf("%d\n", gcd);
	return 0;
}
