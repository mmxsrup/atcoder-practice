#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)
#define reps(i,f,n) for(int i=(f);i<(n);i++)
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll INFF = 1e18;

int solve_left(const string& s, int n, int q, const vector<char>& t, const vector<char>& d) {
	int l = -1, r = n;
	while(r - l > 1) {
		int m = (l + r) / 2;
		int now = m, minidx = m;
		for (int i = 0; i < q; ++i) {
			if (s[now] == t[i]) now += (d[i] == 'L') ? -1 : 1;
			minidx = min(now, minidx);
		}
		if (minidx < 0) l = m;
		else r = m;
	}
	return l;
}

int solve_right(const string& s, int n, int q, const vector<char>& t, const vector<char>& d) {
	int l = -1, r = n;
	while(r - l > 1) {
		int m = (l + r) / 2;
		int now = m, maxidx = m;
		for (int i = 0; i < q; ++i) {
			if (s[now] == t[i]) now += (d[i] == 'L') ? -1 : 1;
			maxidx = max(now, maxidx);
		}
		if (maxidx >= n) r = m;
		else l = m;
	}
	return r;
}

int main(int argc, char const *argv[])
{
	int n, q; cin >> n >> q;
	string s; cin >> s;
	vector<char> t(q), d(q); rep(i, q) cin >> t[i] >> d[i];

	int left = solve_left(s, n, q, t, d);
	int right = solve_right(s, n, q, t, d);
	// printf("%d %d\n", left, right);

	int del = (left + 1) + (n - right);
	printf("%d\n", max(0, n - del));
	return 0;
}