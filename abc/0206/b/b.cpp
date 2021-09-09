#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main () {
	int n; cin >> n;

	int day = 1;
	ll sum = 0;

	while (true) {
		sum += day;
		if (sum >= n) {
			cout << day << endl;
			return 0;
		}
		day++;
	}
    return 0;
}
