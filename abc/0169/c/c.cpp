#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	long long a; string b;
	cin >> a >> b;

	long long b100 = (b[0] - '0') * 100 + (b[2] - '0') * 10 + b[3] - '0';
	cout << a * b100 / 100 << endl;
	return 0;
}
