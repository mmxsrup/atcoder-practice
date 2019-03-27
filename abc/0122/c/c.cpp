#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)
#define reps(i,f,n) for(int i=(f);i<(n);i++)
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll INFF = 1e18;


int sum[100010];

int main(int argc, char const *argv[])
{
	int n, q; cin >> n >> q;
	string s; cin >> s;
	vector<int> l(q), r(q); {
		rep(i, q) cin >> l[i] >> r[i];
	}

	rep(i, n - 1) {
		if (s[i] == 'A' && s[i + 1] == 'C') {
			sum[i + 2]++;
		}
	}

	rep(i, n) sum[i + 1] += sum[i];

	rep(i, q) {
		printf("%d\n", sum[r[i]] - sum[l[i]]);
	}

	return 0;
}