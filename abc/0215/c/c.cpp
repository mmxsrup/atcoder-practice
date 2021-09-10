#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	string s; cin >> s;
	int k; cin >> k;

	sort(s.begin(), s.end());

	int idx = 1;
	do {
		if (idx++ == k) {
			cout << s << endl;
			return 0;
		}
	} while (next_permutation(s.begin(), s.end()));

	return 0;
}
