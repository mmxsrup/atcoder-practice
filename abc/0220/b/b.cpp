#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll calc(string s, ll k) {
	ll ret = 0;
	ll d = 1;
	for (int i = (int)s.size() - 1; i >= 0; --i) {
		ret += d * (s[i] - '0');
		d *= k;
	}
	return ret;
}

int main(int argc, char const *argv[])
{
	int k; string a, b;
	cin >> k >> a >> b;

	cout << calc(a, k) * calc(b, k) << endl;
	return 0;
}
