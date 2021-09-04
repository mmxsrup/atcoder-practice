#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	set<string> st;
	for (int i = 0; i < 3; ++i) {
		string t; cin >> t;
		st.insert(t);
	}

	string list[] = {"ABC", "ARC", "AGC", "AHC"};
	for (int i = 0; i < 4; ++i) {
		if (!st.count(list[i])) {
			cout << list[i] << endl;
		}
	}
	return 0;
}
