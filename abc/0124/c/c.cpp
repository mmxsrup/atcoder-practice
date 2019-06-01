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
	string s; cin >> s;
	int n = s.size();
	int ans0 = 0, ans1 = 0;
	rep(i, n) {
		if (i % 2 == 0 && s[i] == '1') ans0++;
		if (i % 2 == 1 && s[i] == '0') ans0++;
		if (i % 2 == 0 && s[i] == '0') ans1++;
		if (i % 2 == 1 && s[i] == '1') ans1++;
	}
	printf("%d\n", min(ans0, ans1));
	return 0;
}