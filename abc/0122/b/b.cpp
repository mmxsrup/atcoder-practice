#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)
#define reps(i,f,n) for(int i=(f);i<(n);i++)
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll INFF = 1e18;

bool check(const string& s) {
	char list[] = {'A', 'C', 'G', 'T'};
	bool flag = true;
	for (auto u : s) {
		bool f = false;
		rep(i, 4) if (u == list[i]) f = true;
		if (!f) flag = false;
	}
	return flag;
}

int main(int argc, char const *argv[])
{
	string s; cin >> s;
	int ans = 0;
	int size = s.size();
	rep(i, s.size()) {
		reps(len, 1, size - i + 1) {
			if (check(s.substr(i, len))) ans = max(ans, len);
		}
	}
	printf("%d\n", ans);
	return 0;
}