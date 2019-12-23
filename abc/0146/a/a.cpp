#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[]) {
	string s; cin >> s;
	int ans;
	if (s == "SUN") ans = 7;
	if (s == "MON") ans = 6;
	if (s == "TUE") ans = 5;
	if (s == "WED") ans = 4;
	if (s == "THU") ans = 3;
	if (s == "FRI") ans = 2;
	if (s == "SAT") ans = 1;
	cout << ans << endl;
	return 0;
}
