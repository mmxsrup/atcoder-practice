#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	map<int, ll> cnt; {
		for (int i = 0; i < n; ++i) {
			int a; cin >> a;
			cnt[a]++;
		}
	}

	ll sum = (ll)n * (n - 1) / 2;
	for (auto u : cnt) {
		if (u.second > 1) {
			sum -= u.second * (u.second - 1) / 2;
		}
	}
	cout << sum << endl;

	return 0;
}
