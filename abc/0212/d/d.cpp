#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int main(int argc, char const *argv[])
{
	int q; cin >> q;
	priority_queue<long long, vector<long long>, greater<long long>> que;
	long long add = 0;

	for (int i = 0; i < q; ++i) {
		int query; cin >> query;
		if (query == 1) {
			long long x; cin >> x;
			que.push(x - add);
		} else if (query == 2) {
			long long x; cin >> x;
			add += x;
		} else {
			cout << add + que.top() << endl;
			que.pop();
		}
	}
	return 0;
}
