#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	vector<int> a(n + 1); rep(i, n) cin >> a[i + 1];
	set<int> st;
	for (int i = n; i >= 1; --i) {
		int cnt = 0;
		for (int j = 1; j <= n; ++j) {
			if (i * j <= n) {
				if (st.count(i * j)) cnt++;
			} else {
				break;
			}
		}
		if (cnt % 2 != a[i]) {
			st.insert(i);
		}
	}
	cout << st.size() << endl;
	for (auto u : st) {
		cout << u << endl;
	}
	return 0;
}