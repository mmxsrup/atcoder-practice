#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	string n; cin >> n;
	cout << (n[0] == '7' or n[1] == '7' or n[2] == '7' ? "Yes" : "No") << endl;
	return 0;
}
