#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	vector<int> d(n);
	rep(i, n) cin >> d[i];
	int sum = 0;
	rep(i, n) rep(j, n) {
		if (i >= j)
			continue;
		sum += d[i] * d[j];
	}
	cout << sum << endl;
	return 0;
}
