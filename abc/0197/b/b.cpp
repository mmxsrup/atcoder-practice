#include <vector>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	int h, w, x, y; cin >> h >> w >> x >> y;
	x--, y--;
	vector<string> s(h);
	for (int i = 0; i < h; ++i) {
		cin >> s[i];
	}

	const int dy[] = {1, 0, -1, 0};
	const int dx[] = {0, 1, 0, -1};

	int ans = 0;

	for (int i = 0; i < 4; ++i) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		while (0 <= nx and nx < h and 0 <= ny and ny < w) {
			if (s[nx][ny] == '.') {
				ans++;
			} else {
				break;
			}
			nx += dx[i];
			ny += dy[i];
		}
	}

	if (s[x][y] == '.') {
		ans++;
	}

	cout << ans << endl;

	return 0;
}
