#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n, a; cin >> n >> a;
	cout << (a + 2) / 3 << " " << min(n / 3, a) << endl;
	return 0;
}
