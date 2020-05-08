#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	map<string, int> ma;
	rep(i, n) {
		string s; cin >> s;
		ma[s]++;
	}
	int maxv = 0;
	for (auto u : ma) {
		maxv = max(maxv, u.second);
	}
	for (auto u : ma) {
		if (maxv == u.second) {
			cout << u.first << endl;
		}
	}
	return 0;
}
