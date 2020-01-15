#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

#define INF 1e9
const int dy[] = {1, 0, -1, 0};
const int dx[] = {0, 1, 0, -1};

int solve(const vector<string>& board, int h, int w, int sy, int sx, int gy, int gx) {
	vector<vector<int>> cost(h + 2, vector<int>(w + 2, INF));
	queue<pair<int, int>> que;
	que.push(make_pair(sy, sx));
	cost[sy][sx] = 0;

	while(not que.empty()) {
		int y = que.front().first, x = que.front().second;
		que.pop();
		rep(k, 4) {
			int ny = y + dy[k], nx = x + dx[k];
			if (board[ny][nx] == '#') continue;
			if (cost[ny][nx] != INF) continue;
			que.push(make_pair(ny, nx));
			cost[ny][nx] = min(cost[ny][nx], cost[y][x] + 1);
		}
	}
	return cost[gy][gx] == INF ? 0 : cost[gy][gx];
}

int main(int argc, char const *argv[]) {
	int h, w; cin >> h >> w;
	vector<string> s(h + 2);

	string b;
	rep(i, w + 2) b += '#';

	s[0] = b;
	rep(i, h) {
		string t; cin >> t;
		t = '#' + t + '#';
		s[i + 1] = t;
	}
	s[h + 1] = b;

	// rep(i, h + 2) cout << s[i] << endl;

	int ans = 0;
	rep(sy, h)rep(sx, w)rep(gy, h)rep(gx, w) {
		if (s[sy + 1][sx + 1] == '#' or s[gy + 1][gx + 1] == '#') continue;
		int cost = solve(s, h, w, sy + 1, sx + 1, gy + 1, gx + 1);
		ans = max(ans, cost);
	}
	cout << ans << endl;
	return 0;
}
