#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int solve(string &s) {
	int sum = 0;
	for (auto u : s) {
		sum += u - '0';
	}
	return sum;
}

int main(int argc, char const *argv[])
{
	string a, b; cin >> a >> b;
	if (solve(a) < solve(b)) {
		cout << solve(b) << endl;
	} else {
		cout << solve(a) << endl;
	}
    return 0;
}
