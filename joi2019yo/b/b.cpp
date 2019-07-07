#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	vector<int> x(n); rep(i, n) cin >> x[i];
	int m; cin >> m;
	vector<int> a(m); rep(i, m) cin >> a[i];

	vector<int> board(2020, 0);
	rep(i, n) board[x[i]] = i + 1;

	rep(i, m) {
		int index = find(board.begin(), board.end(), a[i]) - board.begin();
		// cout << "index:" << index << endl;
		if (index < 2019 && board[index + 1] == 0) {
			board[index] = 0;
			board[index + 1] = a[i];
		}
	}

	rep(i, 2020) {
		if (board[i] != 0) cout << i << endl;
	}
	return 0;
}
