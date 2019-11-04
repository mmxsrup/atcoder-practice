#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

bool check(int x) {
	return 0 <= x and x <= 9;
}

int main(int argc, char const *argv[])
{
	int a, b; cin >> a >> b;
	if (not check(a) or not check(b)) {
		printf("-1\n");
		return 0;
	}
	printf("%d\n", a * b);
	return 0;
}
