#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int l, q; cin >> l >> q;

	set<int> st;
	st.insert(0); st.insert(l);

	for (int i = 0; i < q; ++i) {
		int c, x; cin >> c >> x;
		if (c == 1) {
			st.insert(x);
		} else {
			auto itr = st.lower_bound(x);
			int r = *itr;
			int l = *prev(itr);
			cout << r - l << endl;
		}
	}
	return 0;
}
