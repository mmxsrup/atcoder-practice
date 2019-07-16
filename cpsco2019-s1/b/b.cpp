#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	string s; cin >> s;
	vector<int> cnt(26, 0);
	for (auto u : s) {
		cnt[u - 'a']++;
	}
	set<int> st;
	for (auto u : cnt) if (u != 0) st.insert(u);
	cout << ((st.size() == 1) ? "Yes" : "No") << endl;
	return 0;
}
