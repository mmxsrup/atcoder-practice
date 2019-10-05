#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	vector<double> v(n);
	rep(i, n) cin >> v[i];
	sort(v.begin(), v.end());

	rep(i, n - 1) {
		v[i + 1] = (v[i] + v[i + 1]) / 2;
	}
	cout << v[n - 1] << endl;
	return 0;
}
