#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int p, q, r; cin >> p >> q >> r;
	printf("%d\n", p + q + r - max({p, q, r}));
	return 0;
}
