#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n, k, q; cin >> n >> k >> q;
	vector<int> a(q);
	rep(i, q) {
		cin >> a[i]; a[i]--;
	}

	vector<int> win(n, 0);
	rep(i, q) win[a[i]]++;

	rep(i, n) {
		int point = k - q + win[i];
		cout << (point > 0 ? "Yes" : "No") << endl;
	}
	return 0;
}
