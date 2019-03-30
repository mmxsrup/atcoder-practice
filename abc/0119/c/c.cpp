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
	int n, a, b, c; cin >> n >> a >> b >> c;
	vector<int> l(n); rep(i, n) cin >> l[i];
	sort(l.begin(), l.end());

	int ans = INF;
	do {
		reps(i, 1, n + 1)reps(j, i + 1, n + 1)reps(k, j + 1, n + 1) {
			vector<int> v(3, 0);
			// printf("%d %d %d\n", i, j, k);
			rep(t, n) {
				if (t < i) v[0] += l[t];
				else if (t < j) v[1] += l[t];
				else if (t < k) v[2] += l[t];
			}
			// printf("%d %d %d\n", v[0], v[1], v[2]);
			sort(v.begin(), v.end());
			int tans = abs(a - v[2]) + abs(b - v[1]) + abs(c - v[0]);
			tans += ((i - 1) + (j - i - 1) + (k - j - 1)) * 10;
			ans = min(ans, tans);
		}
	} while(next_permutation(l.begin(), l.end()));

	printf("%d\n", ans);
	return 0;
}