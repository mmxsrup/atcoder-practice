#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int count(int n, int head, int tail) {
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		string s = to_string(i);
		if (s[0] - '0' == head and s[s.size() - 1] - '0' == tail) {
			ans++;
		}
	}
	return ans;
}

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	vector<vector<int>> cnt(10, vector<int>(10, 0)); {
		for (int i = 1; i <= n; i++) {
			string s = to_string(i);
			cnt[s[0] - '0'][s[s.size() - 1] - '0']++;
		}
	}

	ll ans = 0;
	for (int i = 1; i <= 9; ++i) {
		for (int j = 1; j <= 9; ++j) {
			ans += (ll)cnt[i][j] * cnt[j][i];
		}
	}
	cout << ans << endl;
	return 0;
}
