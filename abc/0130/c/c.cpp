#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[]) {
	ll w, h, x, y; cin >> w >> h >> x >> y;
	printf("%f %d\n", double(w * h) / 2, (w == x * 2 && h == y * 2));
	return 0;
}
