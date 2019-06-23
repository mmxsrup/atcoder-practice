#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n, l; cin >> n >> l;
	vector<int> v(n);
	rep(i, n) {
		v[i] = l + (i + 1) - 1;
	}
	sort(v.begin(), v.end());

	int min_diff = 10000000;
	int idx = -1;
	int sum = 0;
	rep(i, n) {
		sum += v[i];
		int diff = abs(v[i]);
		if (min_diff > diff) {
			min_diff = diff; idx = i;
		}
	}
	assert(idx != -1);

	printf("%d\n", sum - v[idx]);
	return 0;
}
