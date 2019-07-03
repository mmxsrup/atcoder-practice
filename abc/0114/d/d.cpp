#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)


map<ll, int> prime_factor(ll n) {
	map<ll, int> ret;
	for(ll i = 2; i * i <= n; i++) {
		while(n % i == 0) {
			ret[i]++;
			n /= i;
		}
	}
	if(n != 1) ret[n] = 1;
	return ret;
}


int main(int argc, char const *argv[])
{
	int n; cin >> n;
	vector<int> e(n + 1, 0); {
		for (int i = 2; i <= n; ++i) {
			for (auto u : prime_factor(i)) {
				e[u.first] += u.second;
			}
		}
	}

	int ans = 0;

	// 75 = (74 + 1)
	rep(i, n + 1) if (e[i] >= 74) ans++;

	// 75 = (24 + 1) * (2 + 1);
	rep(i, n + 1)rep(j, n + 1) {
		if (i == j) continue;
		if (e[i] >= 24 and e[j] >= 2) ans++;
	}

	// 75 = (14 + 1) * (4 * 1)
	rep(i, n + 1)rep(j, n + 1) {
		if (i == j) continue;
		if (e[i] >= 14 and e[j] >= 4) ans++;
	}

	// 75 = (4 + 1) * (4 + 1) + (2 + 1)
	int tans = 0;
	rep(i, n + 1)rep(j, n + 1)rep(k, n + 1) {
		if (i == j or j == k or k == i) continue;
		if (e[i] >= 4 and e[j] >= 4 and e[k] >= 2) tans++;
	}
	ans += tans / 2;

	cout << ans << endl;
	return 0;
}
