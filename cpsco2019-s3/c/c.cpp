#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	vector<int> s(n), t(n); rep(i, n) cin >> s[i] >> t[i];

	vector<int> imos(1000100, 0);
	rep(i, n) {
		imos[s[i]]++; imos[t[i]]--;
	}
	rep(i, 1000010) imos[i + 1] += imos[i];

	int ans = 0;
	rep(i, 1000010) {
		// if (i < 20) printf("%d\n", imos[i]);
		if (imos[i + 1] != 0 && imos[i] == 0) ans++;
	}
	cout << ans << endl;
	return 0;
}
