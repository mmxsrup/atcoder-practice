#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	string s; cin >> s;
	int cnt = 0;
	int q; cin >> q;

	deque<char> que;
	for (auto c : s) que.push_back(c);

	rep(i, q) {
		int query; cin >> query;
		if (query == 1) {
			cnt++;
		} else {
			int f; char c; cin >> f >> c;
			if (cnt % 2 == 0) {
				if (f == 1) que.push_front(c);
				else que.push_back(c);
			} else {
				if (f == 1) que.push_back(c);
				else que.push_front(c);
			}
		}
	}

	string ans;
	for (auto c : que) ans += c;
	if (cnt % 2 != 0) {
		reverse(ans.begin(), ans.end());
	}
	cout << ans << endl;
	return 0;
}
