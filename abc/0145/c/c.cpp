#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

double nb(int n) {
	double d = 1.;
	for (int i = 1; i <= n; ++i){
		d *= (double)i;
	}
	return d;
}

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	vector<int> x(n), y(n);
	rep(i, n) cin >> x[i] >> y[i];

	vector<int> v;
	rep(i, n)
		v.push_back(i);
	sort(v.begin(), v.end());

	double sum = 0;
	do {
		rep(k, n - 1) {
			int i = v[k], j = v[k + 1];
			int dd = pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2);
			sum += sqrt(double(dd));
		}
	} while(next_permutation(v.begin(), v.end()));

	printf("%.9f\n", sum / nb(n));
	return 0;
}
