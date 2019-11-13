#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int L[2010][2010];
int R[2010][2010];
int U[2010][2010];
int D[2010][2010];

int main(int argc, char const *argv[])
{
	int h, w; cin >> h >> w;
	vector<string> s(h); rep(i, h) cin >> s[i];


	for (int i = 0; i < h; ++i) {
		for (int j = 0; j < w; ++j) {
			if (s[i][j] == '.') L[i + 1][j + 1] = L[i + 1][j] + 1;
			else L[i + 1][j + 1] = 0;
		}
	}

	for (int i = 0; i < h; ++i) {
		for (int j = w - 1; j >= 0; --j) {
			if (s[i][j] == '.') R[i + 1][j + 1] = R[i + 1][j + 2] + 1;
			else R[i + 1][j + 1] = 0;
		}
	}

	for (int j = 0; j < w; ++j) {
		for (int i = 0; i < h; ++i) {
			if (s[i][j] == '.') U[i + 1][j + 1] = U[i][j + 1] + 1;
			else U[i + 1][j + 1] = 0;
		}
	}
	for (int j = 0; j < w; ++j) {
		for (int i = h - 1; i >= 0; --i) {
			if (s[i][j] == '.') D[i + 1][j + 1] = D[i + 2][j + 1] + 1;
			else D[i + 1][j + 1] = 0;
		}
	}

	int ans = 0;
	rep(i, h)rep(j, w) {
		if (s[i][j] == '#') continue;
		int y = U[i + 1][j + 1] + D[i + 1][j + 1] - 1;
		int x = L[i + 1][j + 1] + R[i + 1][j + 1] - 1;
		ans = max(ans, x + y - 1);
	}
	printf("%d\n", ans);

	return 0;
}
