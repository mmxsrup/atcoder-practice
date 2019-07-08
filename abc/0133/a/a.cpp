#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n, a, b; cin >> n >> a >> b;
	cout << min(n * a, b) << endl;
	return 0;
}
