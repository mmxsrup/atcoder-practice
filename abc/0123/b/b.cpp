#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)
#define reps(i,f,n) for(int i=(f);i<(n);i++)
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll INFF = 1e18;

int solve(const vector<int>& v) {
	int now = 0;
	rep(i, 5) {
		while (now % 10 != 0) now++;
		now += v[i];
	}
	return now;
}

int main(int argc, char const *argv[]) {
	vector<int> v;
	rep(i, 5) {
		int d; cin >> d;
		v.emplace_back(d);
	}
	sort(v.begin(), v.end());

	int ans = INF;
	do {
		ans = min(solve(v), ans);
	} while(next_permutation(v.begin(), v.end()));
	printf("%d\n", ans);

	return 0;
}