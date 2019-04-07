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
	vector<int> v;
	rep(i, 5) {
		int d; cin >> d;
		v.emplace_back(d);
	}
	int k; cin >> k;

	bool f = true;
	rep(i, 5) reps(j, i + 1, 5)if (v[j] - v[i] > k) f = false;
	printf("%s\n", f ? "Yay!" : ":(");
	return 0;
}