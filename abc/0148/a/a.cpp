#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int a, b; cin >> a >> b;
	set<int> st;
	st.insert(a), st.insert(b);
	rep(i, 3) {
		if (not st.count(i + 1)) {
			cout << i + 1 << endl;
		}
	}
	return 0;
}
