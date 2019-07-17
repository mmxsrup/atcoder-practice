#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

bool used[110][110 * 110];
const int dy[] = {1, 0};
const int dx[] = {0, 1};

void solve(int h, int w, const vector<string>& c) {
	queue<pair<int, int>> que;
	que.push(make_pair(0, 0));
	used[0][0] = true;
	while (not que.empty()) {
		int y = que.front().first, x = que.front().second;
		que.pop();
		rep(k, 2) {
			int ny = y + dy[k], nx = x + dx[k];
			if (not (0 <= ny and ny < h and 0 <= nx and nx < w)) continue;
			if (used[ny][nx]) continue;
			if (c[ny][nx] == '#') continue;
			used[ny][nx] = true;
			que.push(make_pair(ny, nx));
		}
	}
}

int main(int argc, char const *argv[])
{
	int h, w; cin >> h >> w;
	vector<string> c(h); rep(i, h) cin >> c[i];
	vector<string> s(h);
	rep(i, h) {
		rep(j, 100) {
			s[i] += c[i];
		}
	}
	solve(h, 100 * w, s);
	cout << (used[h - 1][100 * w - 1] ? "Yay!" : ":(") << endl;
	return 0;
}
