#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[]) {
	int n, m; cin >> n >> m;

	set<int> ac_set;
	int penalty = 0;
	vector<int> flag(n, 0), cnt(n, 0);
	rep(i, m) {
		int p; string s;
		cin >> p >> s;
		if (s == "AC") {
			ac_set.insert(p);
			if (not flag[p]) {
				penalty += cnt[p];
				flag[p] = 1;
			}
		}
		cnt[p]++;
	}
	cout << ac_set.size() << " " << penalty << endl;

	return 0;
}
