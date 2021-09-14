#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(int argc, char const *argv[])
{
	int n, t, x; cin >> n >> x >> t;
	int cnt = (n + x - 1) / x;
	cout << cnt * t << endl;
	return 0;
}
