#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int a, b; cin >> a >> b;
	if ((a + b) % 2) printf("IMPOSSIBLE\n");
	else printf("%d\n", (a + b) / 2);
	return 0;
}