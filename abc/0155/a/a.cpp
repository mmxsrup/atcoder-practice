#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int a, b, c; cin >> a >> b >> c;
	set<int> st;
	st.insert(a);
	st.insert(b);
	st.insert(c);
	cout << ((int)st.size() == 2 ? "Yes" : "No") << endl;
	return 0;
}
