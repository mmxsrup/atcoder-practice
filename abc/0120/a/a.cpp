#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll INFF = 1e18;

int main(int argc, char const *argv[])
{
	int a, b, c; cin >> a >> b >> c;
	int ans = min(b / a, c);
	printf("%d\n", ans);
	return 0;
}