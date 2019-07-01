#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	string s; cin >> s;
	int l = stoi(s.substr(0, 2));
	int r = stoi(s.substr(2, 2));
	bool f_yymm = (1 <= r && r <= 12) ? true : false;
	bool f_mmyy = (1 <= l && l <= 12) ? true : false;
	if (f_yymm && f_mmyy) {
		printf("AMBIGUOUS\n");
	} else if (f_yymm) {
		printf("YYMM\n");
	} else if (f_mmyy) {
		printf("MMYY\n");
	} else {
		printf("NA\n");
	}
	return 0;
}
