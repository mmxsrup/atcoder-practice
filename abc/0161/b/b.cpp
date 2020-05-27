#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n, m; cin >> n >> m;
	vector<int> a(n); rep(i, n) cin >> a[i];
	int sum = accumulate(a.begin(), a.end(), 0);
	int cnt = 0;
	for (int u : a) {
		if (4 * m * u >= sum) {
			cnt++;
		}
	}
	cout << (cnt >= m ? "Yes" : "No") << endl;
	return 0;
}
