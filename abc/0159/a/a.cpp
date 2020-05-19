#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n, m; cin >> n >> m;
	cout << n * (n - 1) / 2 + m * (m - 1) / 2 << endl;
	return 0;
}
