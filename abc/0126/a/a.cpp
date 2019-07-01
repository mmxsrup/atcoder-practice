#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	int k; cin >> k;
	string s; cin >> s;
	s[k - 1] += ('a' - 'A');
	cout << s << endl;
	return 0;
}
