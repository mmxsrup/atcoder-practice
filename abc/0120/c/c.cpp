#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)
#define reps(i,f,n) for(int i=(f);i<(n);i++)
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll INFF = 1e18;


int main(int argc, char const *argv[])
{
	string s; cin >> s;

	stack<char> st;
	for (auto u : s) {
		if (st.empty()) {
			st.push(u);
		} else {
			int top = st.top();
			if ((top == '0' && u == '1') || (top == '1' && u == '0')) {
				st.pop();
			} else {
				st.push(u);
			}
		}
	}

	printf("%d\n", int(s.size() - st.size()));
	return 0;
}