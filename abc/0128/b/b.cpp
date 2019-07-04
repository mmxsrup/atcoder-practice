#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	vector<tuple<string, int, int>> v;
	rep(i, n){
		string s; int p; cin >> s >> p;
		v.push_back(make_tuple(s, -p, i + 1));
	}
	sort(v.begin(), v.end());

	for (auto u : v) {
		string a; int b, c;
		tie(a, b, c) = u;
		cout << c << endl;
	}

	return 0;
}