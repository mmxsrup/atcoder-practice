#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n, m; cin >> n >> m;
	vector<int> l(m), r(m); rep(i, m) cin >> l[i] >> r[i];

	int l_max = *max_element(l.begin(), l.end());
	int r_min = *min_element(r.begin(), r.end());
	if (l_max > r_min) {
		printf("0\n");
	} else {
		printf("%d\n", r_min - l_max + 1);
	}
	return 0;
}
