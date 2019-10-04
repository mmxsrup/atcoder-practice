#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n, m; cin >> n >> m;
	vector<int> a(n), b(n);
	rep(i, n) cin >> a[i] >> b[i];

	vector<pair<int, int>> v(n); // day, money
	rep(i, n) {
		v[i] = make_pair(a[i], b[i]);
	}
	sort(v.begin(), v.end());

	int idx = 0, ans = 0;
	priority_queue<pair<int, int>> que; // money, day
	rep(i, m) {
		while (v[idx].first <= i + 1) {
			que.push(make_pair(v[idx].second, v[idx].first));
			idx++;
		}
		if (not que.empty()) {
			ans += que.top().first;
			que.pop();
		}
	}
	cout << ans << endl;
	return 0;
}
