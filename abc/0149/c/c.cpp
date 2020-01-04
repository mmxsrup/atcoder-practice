#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

bool is_prime(int x) {
	for (int i = 2; i < x; ++i) {
		if (x % i == 0)
			return false;
	}
	return true;
}

int main(int argc, char const *argv[])
{
	int x; cin >> x;
	while (not is_prime(x)) {
		x++;
	}
	cout << x << endl;
	return 0;
}
