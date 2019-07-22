#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n, d; cin >> n >> d;
	int k = 2 * d + 1;
	cout << (n + k - 1) / k << endl;
	return 0;
}
