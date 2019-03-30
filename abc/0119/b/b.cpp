#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)
#define reps(i,f,n) for(int i=(f);i<(n);i++)
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll INFF = 1e18;

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	vector<double> x(n);
	vector<string> u(n);
	rep(i, n) cin >> x[i] >> u[i];

	double sum = 0.;
	rep(i, n) {
		sum += ((u[i] == "JPY") ? 1. : 380000.) * x[i];
	}
	printf("%f\n", sum);
	return 0;
}