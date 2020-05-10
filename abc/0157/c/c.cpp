#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n, m; cin >> n >> m;
	vector<int> s(m), c(m); rep(i, m) cin >> s[i] >> c[i];

	int l, r; {
		if (n == 1) {
			l = 0, r = 9;
		} else if (n == 2) {
			l = 10, r = 99;
		} else {
			l = 100, r = 999;
		}
	}

	int ans = -1;
	for (int i = l; i <= r; i++) {
		string str = to_string(i);
		bool flag = true;
		rep(j, m) {
			if (str[s[j] - 1] - '0' != c[j]) {
				flag = false;
				break;
			}
		}
		if (flag) {
			ans = i;
			break;
		}
	}
	cout << ans << endl;
	return 0;
}
