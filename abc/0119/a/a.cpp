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
	int year = stoi(s.substr(0, 4));
	int month = stoi(s.substr(5, 2));
	int day = stoi(s.substr(8, 2));
	if (year < 2019 || (year == 2019 && month < 4) ||
		(year == 2019 && month == 4 && day <= 30)) printf("Heisei\n");
	else printf("TBD\n");
	return 0;
}