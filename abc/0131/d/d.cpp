#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	vector<int> a(n), b(n); rep(i, n) cin >> a[i] >> b[i];
	vector<pair<int, int>> v(n);
	rep(i, n) v[i] = make_pair(b[i], a[i]);
	sort(v.begin(), v.end());

	int now = 0;
	bool flag = true;
	rep(i, n) {
		int limit = v[i].first;
		int time = v[i].second;
		if (now + time > limit) {
			flag = false;
			break;
		} else {
			now += time;
		}
	}
	printf("%s\n", flag ? "Yes" : "No");
	return 0;
}
