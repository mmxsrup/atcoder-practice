#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	int ans = 0;
	for (int i = 1; i <= n; ++i) {
		auto s = to_string(i);
		if (s.size() % 2 == 1)
			ans++;
	}
	cout << ans << endl;
	return 0;
}
