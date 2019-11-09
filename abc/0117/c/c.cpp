#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n, m; cin >> n >> m;
	vector<int> x(m); rep(i, m) cin >> x[i];

	if (n >= m) {
		printf("0\n");
		return 0;
	}

	sort(x.begin(), x.end());

	vector<int> b(m - 1);
	rep(i, m - 1) b[i] = x[i + 1] - x[i];
	sort(b.begin(), b.end()); reverse(b.begin(), b.end());

	int ma = 0;
	rep(i, n - 1) ma += b[i];
	cout << accumulate(b.begin(), b.end(), 0) - ma << endl;

	return 0;
}
