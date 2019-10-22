#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	string s; cin >> s;
	if (s == "Sunny")
		cout << "Cloudy" << endl;
	else if (s == "Cloudy")
		cout << "Rainy" << endl;
	else
		cout << "Sunny" << endl;
	return 0;
}
