#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[]) {
	int n; cin >> n;
	vector<int> p(n); rep(i, n) cin >> p[i];

	int cnt = 0;
	rep(i, n - 2) {
		int mi = min({p[i], p[i + 1], p[i + 2]});
		int ma = max({p[i], p[i + 1], p[i + 2]});
		int sum = p[i] + p[i + 1] + p[i + 2];
		if (sum - (mi + ma) == p[i + 1]) {
			cnt++;
		}
	}
	printf("%d\n", cnt);
	return 0;
}
