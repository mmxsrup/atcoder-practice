#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int a, b, c; cin >> a >> b >> c;
	cout << max(0, c - (a - b)) << endl;
	return 0;
}
