#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)
#define reps(i,f,n) for(int i=(f);i<(n);i++)
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll INFF = 1e18;

ll dp[110][4][4][4];

int main(int argc, char const *argv[])
{
	int n; cin >> n;

	reps(i, 1, 4)rep(j, 4)rep(k, 4)rep(l, 4) {
		if ((j == 0 && k == 2 && l == 1) || (j == 2 && k == 0 && l == 1) || 
			(j == 0 && k == 1 && l == 2)) continue;
		dp[i][j][k][l] = 1;
	}

	reps(i, 3, n)rep(j, 4)rep(k, 4)rep(l, 4) {
		rep(m, 4) {
			if (m == 0) { // A
			} else if (m == 1) { // C
				if ((k == 0 && l == 2) || (k == 2 && l == 0)) continue; // ?AG, ?GA
				if (j == 0 && k == 2) continue; // AG?
				if (j == 0 && l == 2) continue; // A?G
			} else if (m == 2) { // G
				if (k == 0 && l == 1) continue; // ?AC
			} else { // T
			}
			(dp[i + 1][k][l][m] += dp[i][j][k][l]) %= MOD;
		}
	}

	ll ans = 0;
	rep(i, 4)rep(j, 4)rep(l, 4) {
		(ans += dp[n][i][j][l]) %= MOD;
	}
	printf("%lld\n", ans);

	return 0;
}