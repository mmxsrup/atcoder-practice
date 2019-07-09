#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int h, w; cin >> h >> w;
	vector<vector<int>> a(h, vector<int>(w)); {
		rep(i, h)rep(j, w) cin >> a[i][j];
	}

	int y = 0, x = 0;
	vector<tuple<int, int, int, int>> ans;
	rep(i, h * w - 1) {
		int ny = y, nx = x;
		if (y % 2 == 0) {
			if (x == w - 1) ny++;
			else nx++;
		} else {
			if (x == 0) ny++;
			else nx--;
		}
		// cout << "t: " << y + 1 << " " << x + 1 << " " << ny + 1 << " " << nx + 1 << endl;
		if (a[y][x] & 1) {
			// cout << y + 1 << " " << x + 1 << " " << ny + 1 << " " << nx + 1 << endl;
			ans.push_back(make_tuple(y + 1, x + 1, ny + 1, nx + 1));
			a[y][x]--;
			a[ny][nx]++;
		}
		y = ny, x = nx;
	}

	cout << ans.size() << endl;
	for (auto u : ans) {
		int y, x, ny, nx; tie(y, x, ny, nx) = u;
		cout << y << " " << x << " " << ny << " " << nx << endl;
	}
	return 0;
}
