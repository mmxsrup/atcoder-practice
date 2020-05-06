#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	vector<int> p(n); rep(i, n) cin >> p[i];

	int min = n + 1;
	int ans = 0;
	rep(i, n) {
		if (p[i] < min) {
			min = p[i];
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
