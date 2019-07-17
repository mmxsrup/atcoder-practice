#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n, t; cin >> n >> t;
	vector<int> a(n - 1); rep(i, n - 1) cin >> a[i];
	int sum = accumulate(a.begin(), a.end(), 0);
	cout << (sum + t - 1) / t << endl;
	return 0;
}
