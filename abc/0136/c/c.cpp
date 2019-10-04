#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	vector<int> h(n); rep(i, n) cin >> h[i];

	bool flag = true;
	for (int i = 0; i < n - 1; ++i) {
		if (h[i] < h[i + 1]) {
			h[i + 1]--;
		} else if (h[i] > h[i + 1]) {
			flag = false;
			break;
		}
	}
	printf("%s\n", flag ? "Yes" : "No");
	return 0;
}
