#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)
#define reps(i,f,n) for(int i=(f);i<(n);i++)
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll INFF = 1e18;

int main(int argc, char const *argv[])
{
	int n, m; cin >> n >> m;
	vector<int> cnt(m, 0);
	rep(i, n) {
		int k; cin >> k;
		rep(i, k) {
			int a; cin >> a;
			cnt[a - 1]++;
		}
	}

	int ans = 0;
	rep(i, m) {
		if (cnt[i] == n)
			ans++;
	}
	printf("%d\n", ans);
	return 0;
}
