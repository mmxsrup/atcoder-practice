#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(int argc, char const *argv[])
{
	string s; cin >> s;
	int sum  = 0;
	for (auto u : s) {
		sum += u - '0';
	}
	cout << (sum % 9 ? "No" : "Yes") << endl;
	return 0;
}
