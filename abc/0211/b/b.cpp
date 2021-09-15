#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

using namespace std;

int main() {
	set<string> st;
	for (int i = 0; i < 4; ++i) {
		string t; cin >> t;
		st.insert(t);
	}

	if (st.count("H") && st.count("2B") && st.count("3B") && st.count("HR")) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	return 0;
}
