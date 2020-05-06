#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int h, n; cin >> h >> n;
	vector<int> a(n); rep(i, n) cin >> a[i];
	int sum = 0; rep(i, n) sum += a[i];
	cout << (sum >= h ? "Yes" : "No") << endl;
	return 0;
}
