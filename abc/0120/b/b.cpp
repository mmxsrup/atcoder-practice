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
	int a, b, k; cin >> a >> b >> k;
	int cnt = 0;
	for (int i = min(a, b); i >= 1; --i) {
		if (a % i == 0 && b % i == 0) {
			// printf("i %d\n", i);
			cnt++;
		}
		if (cnt == k) {
			printf("%d\n", i);
			break;
		}
	}
	return 0;
}