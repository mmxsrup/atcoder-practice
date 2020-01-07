#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int a1, a2, a3; cin >> a1 >> a2 >> a3;
	if (a1 + a2 + a3 >= 22) printf("bust\n");
	else printf("win\n");
	return 0;
}
