#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[]) {
	int n; cin >> n;
	vector<int> a(n, 0); rep(i, n) cin >> a[i];

	vector<pair<int, int>> v;
	rep(i, n) v.push_back(make_pair(a[i], i));
	sort(v.begin(), v.end()); reverse(v.begin(), v.end());

	int ans = 0;
	int now = 0;
	int i = 0;

	vector<bool> board(n, false);

	while(i < v.size()) {
		int nowh = v[i].first;
		if (nowh == 0) break;

		while (i < v.size() and v[i].first == nowh) {
			int h = v[i].first;
			int idx = v[i].second;

			int diff = -1;
			if (idx == 0 or not board[idx - 1]) diff++;
			if (idx == n - 1 or not board[idx + 1]) diff++;

			now += diff;
			board[idx] = true;
			i++;
			// printf("h %d now %d\n", h, now);
		}
		ans = max(ans, now);
	}

	cout << ans << endl;
	return 0;
}
