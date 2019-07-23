#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	vector<int> a(n); rep(i, n) cin >> a[i];
	sort(a.begin(), a.end());

	queue<int> p, m;
	p.push(a[n - 1]); m.push(a[0]);
	int ans = a[n - 1] - a[0];
	for (int i = 1; i < n - 1; ++i) {
		if (a[i] >= 0) {
			p.push(a[i]);
			ans += a[i];
		} else {
			m.push(a[i]);
			ans -= a[i];
		}
	}

	printf("%d\n", ans);

	if (p.size() == 1) {
		printf("%d %d\n", p.front(), m.front());
		int d = p.front() - m.front();
		p.pop(), m.pop();
		while (not m.empty()) {
			printf("%d %d\n", d, m.front());
			d -= m.front();
			m.pop();
		}
		assert(d == ans);
		return 0;
	}

	int d = m.front() - p.front();
	printf("%d %d\n", m.front(), p.front());
	m.pop(); p.pop();

	while (p.size() > 1) {
		printf("%d %d\n", d, p.front());
		d = d - p.front(); p.pop();
	}

	assert(p.size() == 1);

	if (m.size() >= 1) {
		int d2 = p.front() - m.front();
		printf("%d %d\n", p.front(), m.front());
		p.pop(); m.pop();
		while (m.size() > 0) {
			printf("%d %d\n", d2, m.front());
			d2 = d2 - m.front(); m.pop();
		}
		printf("%d %d\n", d2, d);
		assert(d2 - d == ans);
	} else {
		printf("%d %d\n", p.front(), d);
		assert(p.front() - d == ans);
	}
	return 0;
}
