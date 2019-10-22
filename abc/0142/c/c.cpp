#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	vector<int> a(n);
	rep(i, n) cin >> a[i];

	vector<pair<int, int>> v;
	rep(i, n) {
		v.push_back(make_pair(a[i], i));
	}
	sort(v.begin(), v.end());

	for (auto u : v)
		cout << u.second + 1 << " ";
	cout << endl;
	return 0;
}
