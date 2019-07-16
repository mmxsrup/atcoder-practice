#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

const int INF = (int)1e9;

int cnt(ll value) {
	vector<ll> coin;
	for (int i = 0; i < 10; ++i){
		coin.push_back(pow(10, i));
		coin.push_back(5 * pow(10, i));
	}
	sort(coin.begin(), coin.end());
	reverse(coin.begin(), coin.end());
	int idx = 0;
	int ret = 0;
	while (value > 0) {
		int d = value / coin[idx]; // 枚数
		value -= d * coin[idx];
		ret += d;
		idx++;
	}
	return ret;
}

int dfs(ll value, int idx, int size, int n, int k, const vector<int>& a) {
	if (size == k) {
		return cnt(value);
	} else if (idx == n) {
		return INF;
	}

	int ret = INF;
	for (int i = idx; i < n; ++i) {
		ret = min(ret, dfs(value + a[i], i + 1, size + 1, n, k, a));
	}
	return ret;
}

int main(int argc, char const *argv[])
{
	int n, k; cin >> n >> k;
	vector<int> a(n); rep(i, n) cin >> a[i];
	cout << dfs(0, 0, 0, n, k, a) << endl;
	return 0;
}
