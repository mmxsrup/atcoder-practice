#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n; string s;
	cin >> n >> s;
	int cnt = 0;
	rep(i, (int)s.size() - 2) {
		if (s.substr(i, 3) == "ABC") {
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}
