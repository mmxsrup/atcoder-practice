#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[]) {
	string s; cin >> s;
	vector<char> v; set<char> st;
	for (auto u : s) {
		v.push_back(u);
		st.insert(u);
	}
	sort(v.begin(), v.end());
	
	if (st.size() == 2 && v[1] != v[2]) printf("Yes\n");
	else printf("No\n");

	return 0;
}
