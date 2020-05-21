#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	vector<int> a(n); rep(i, n) cin >> a[i];
	map<int, int> ma; rep(i, n) ma[a[i]]++;

	ll sum = 0;
	for (auto u : ma) {
		ll num = u.second;
		sum += num * (num - 1) / 2;
	}

	rep(i, n) {
		ll num = ma[a[i]];
		cout << sum - (num * (num - 1) / 2) + ((num - 1) * (num - 2) / 2) << endl;
	}
	return 0;
}
