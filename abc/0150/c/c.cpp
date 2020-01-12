#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int calc(int n, const vector<int>& org) {
	vector<int> v = org;
	sort(v.begin(), v.end());

	int cnt = 0;
	do {
		cnt++;
		bool f = true;
		rep(i, n) {
			if (v[i] != org[i]) {
				f = false;
			}
		}
		if (f) {
			break;
		}
	} while(next_permutation(v.begin(), v.end()));

	return cnt;
}

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	vector<int> p(n), q(n);
	rep(i, n) cin >> p[i];
	rep(i, n) cin >> q[i];
	cout << abs(calc(n, p) - calc(n, q)) << endl;
	return 0;
}
