#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n; string s;
	cin >> n >> s;
	for (int i = 0; i < s.size(); i++) {
		s[i] += n;
		if (s[i] > 'Z') {
			s[i] -= 26;
		}
	}
	cout << s << endl;
	return 0;
}
