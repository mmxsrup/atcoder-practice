#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

bool check(int x) {
	rep(i, 10)rep(j, 10) {
		if (i * j == x)
			return true;
	}
	return false;
}

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	cout << (check(n) ? "Yes" : "No") << endl;
	return 0;
}
