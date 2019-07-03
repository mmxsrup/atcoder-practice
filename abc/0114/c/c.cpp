#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int dfs(ll num, int mask, int n) {
	if (num > n) return 0;
	int ret = (mask == 7) ? 1 : 0;
	ret += dfs(num * 10 + 7, mask | 4, n);
	ret += dfs(num * 10 + 5, mask | 2, n);
	ret += dfs(num * 10 + 3, mask | 1, n);
	return ret;
}

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	cout << dfs(0ll, 0, n) << endl;
	return 0;
}
