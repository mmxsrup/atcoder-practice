#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	set<pair<string, string>> st;
	for (int i = 0; i < n; ++i) {
		string s, t; cin >> s >> t;
		st.insert(make_pair(s, t));
	}

	cout << (((int)st.size() == n) ? "No" : "Yes") << endl;
	return 0;
}
