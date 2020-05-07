#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	vector<int> a(n); rep(i, n) cin >> a[i];
	set<int> st; rep(i, n) st.insert(a[i]);
	cout << ((int)st.size() == n ? "YES" : "NO") << endl;
	return 0;
}
