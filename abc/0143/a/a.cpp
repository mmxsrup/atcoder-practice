#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int a, b; cin >> a >> b;
	cout << max(a - b * 2, 0) << endl;
	return 0;
}
