#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[]) {
	int n; cin >> n;
	vector<int> d(n); rep(i, n) cin >> d[i];
	sort(d.begin(), d.end());

	printf("%d\n", d[n / 2] - d[n / 2 - 1]);
	return 0;
}
