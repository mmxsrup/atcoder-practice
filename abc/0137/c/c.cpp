#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	map<string, ll> ma;
	rep(i, n) {
		string s; cin >> s;
		sort(s.begin(), s.end());
		ma[s]++;
	}

	ll ans = 0;
	for (auto u : ma) {
		ans += u.second * (u.second - 1) / 2;
	}
	cout << ans << endl;
	return 0;
}
