#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	vector<string> w(n); rep(i, n) cin >> w[i];
	set<string> st; {
		rep(i, n) st.insert(w[i]);
	}
	bool flag = true;
	for (int i = 1; i < n; ++i) {
		if (w[i - 1].back() != w[i].front()) flag = false;
	}
	if (flag && st.size() == n)  printf("Yes\n");
	else printf("No\n");
	return 0;
}
