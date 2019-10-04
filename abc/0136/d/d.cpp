#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	string s; cin >> s;
	vector<int> ans(s.size() + 1, 0);

	{ // R
		int x = 0, y = 0;
		rep(i, s.size()) {
			if (s[i] == 'R') {
				x++;
				swap(x, y);
			} else {
				ans[i] += x;
				ans[i - 1] += y;
				x = y = 0;
			}
		}
	}

	{ // L
		int x = 0, y = 0;
		for (int i = s.size() - 1; i >= 0 ; --i) {
			if (s[i] == 'L') {
				x++;
				swap(x, y);
			} else {
				ans[i] += x;
				ans[i + 1] += y;
				x = y = 0;
			}
		}
	}

	rep(i, s.size()) cout << ans[i] << " ";
	cout << endl;
	return 0;
}
