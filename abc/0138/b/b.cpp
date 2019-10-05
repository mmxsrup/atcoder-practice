#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	double sum = 0.;
	rep(i, n) {
		int a; cin >> a;
		sum += 1. / a;
	}
	cout << 1. / sum << endl;
	return 0;
}
