#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int used[410][410];
const int dy[] = {1, 0, -1, 0};
const int dx[] = {0, 1, 0, -1};

ll bfs(int sy, int sx, const vector<string>& s, int h, int w) {
	queue<pair<int, int>> que;
	que.push(make_pair(sy, sx));
	used[sy][sx] = true;

	int black = 0, white = 0;

	while (not que.empty()) {
		int y = que.front().first, x = que.front().second;
		que.pop();
		if (s[y][x] == '#') black++;
		else white++;

		rep(i, 4) {
			int ny = y + dy[i];
			int nx = x + dx[i];
			if (not (0 <= ny and ny < h and 0 <= nx and nx < w))
				continue;
			if (used[ny][nx])
				continue;
			if (s[y][x] != s[ny][nx]) {
				used[ny][nx] = true;
				que.push(make_pair(ny, nx));
			}
		}
	}
	return (ll)black * white;
}

int main(int argc, char const *argv[])
{
	int h, w; cin >> h >> w;
	vector<string> s(h); rep(i, h) cin >> s[i];
	ll ans = 0;
	rep(i, h)rep(j, w) {
		if (not used[i][j]) 
			ans += bfs(i, j, s, h, w);
	}
	cout << ans << endl;
	return 0;
}
