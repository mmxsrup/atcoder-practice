#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n, m; cin >> n >> m;
	vector<int> a(n); rep(i, n) cin >> a[i];
	priority_queue<int> que;
	rep(i, n) que.push(a[i]);

	rep(i, m) {
		int d = que.top(); que.pop();
		que.push(d / 2);
	}
	ll ans = 0;
	while (not que.empty()) {
		ans += que.top();
		que.pop();
	}
	cout << ans << endl;
	return 0;
}
