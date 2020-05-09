#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n, r; cin >> n >> r;
	cout << r + max(0, 10 - n) * 100 << endl;
	return 0;
}
