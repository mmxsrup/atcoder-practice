#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int f(int n) {
	return (n % 2 == 0) ? n / 2 : 3 * n + 1;
}

int main(int argc, char const *argv[])
{
	int s; cin >> s;
	int a = s;
	vector<int> memo(1000100, -1);
	memo[a] = s;
	int idx = 2;
	while (1) {
		int nexta = f(a);
		if (memo[nexta] != -1) {
			printf("%d\n", idx);
			return 0;
		}
		memo[nexta] = idx++;
		a = nexta;
	}
	return 0;
}
