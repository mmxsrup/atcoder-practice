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
	string s; cin >> s;
	int cntr = 0, cntb = 0;
	for (auto u : s)	{
		((u == 'R') ? cntr : cntb) += 1;
	}
	if (cntr > cntb) printf("Yes\n");
	else printf("No\n");
	return 0;
}