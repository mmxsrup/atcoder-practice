#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	vector<int> l(n); rep(i, n) cin >> l[i];
	sort(l.begin(), l.end());
	int sum = accumulate(l.begin(), l.end() - 1, 0);
	int ma = l.back();
	if (sum > ma) printf("Yes\n");
	else printf("No\n");
	return 0;
}
