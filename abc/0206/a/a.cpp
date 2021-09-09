#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main () {
	int n; cin >> n;
	int val = 1.08 * n;

	if (val < 206) {
		cout << "Yay!" << endl;
	} else if (val == 206) {
		cout << "so-so" << endl;
	} else {
		cout << ":(" << endl;
	}

    return 0;
}
