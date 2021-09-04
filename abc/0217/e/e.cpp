#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int q; cin >> q;

	queue<int> que;
	std::priority_queue<int, std::vector<int>, std::greater<int>> pq;

	while(q--) {
		int t; cin >> t;
		if (t == 1) {
			int x; cin >> x;
			que.push(x);
		} else if (t == 2) {
			if (!pq.empty()) {
				int x = pq.top();
				pq.pop();
				cout << x << endl;
			} else {
				int x = que.front();
				que.pop();
				cout << x << endl;
			}
		} else {
			while (!que.empty()) {
				pq.push(que.front());
				que.pop();
			}
		}
	}
	return 0;
}
