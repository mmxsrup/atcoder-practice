#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	vector<int> p(n); rep(i, n) cin >> p[i];
	int cnt = 0;
	rep(i, n) if (i + 1 != p[i]) cnt++;
	printf("%s\n", (cnt <= 2 ? "YES" : "NO"));
	return 0;
}
