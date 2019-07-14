#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)
#define reps(i,f,n) for(int i=(f);i<(n);i++)
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll INFF = 1e18;

const int num[10] = {0, 2, 5, 5, 4, 5, 6, 3, 7, 6};

string dp[2][10010];

bool cmp(const string& s, const string& t) {
	if (t == "#") return true;
	if (s.size() != t.size()) {
		return (s.size() > t.size()) ? true : false;
	}
	int size = s.size();
	rep(i, size) {
		if (s[i] != t[i]) {
			return (s[i] > t[i]) ? true : false;
		}
	} 
}

int main(int argc, char const *argv[]) 
{
	int n, m; cin >> n >> m;
	vector<int> a(m); rep(i, m) cin >> a[i];
	rep(i, 2)rep(j, 10010) dp[i][j] = "#";
	dp[0][0] = "";
	rep(i, n) {
		rep(j, 10010) dp[(i + 1) % 2][j] = dp[i % 2][j];
		rep(j, m) {
			if (dp[i % 2][i] == "#") continue;
			if (i + num[a[j]] > n) continue;
			if (cmp(dp[i % 2][i] + to_string(a[j]), dp[(i + 1) % 2][i + num[a[j]]])) {
				dp[(i + 1) % 2][i + num[a[j]]] = dp[i % 2][i] + to_string(a[j]);
			}
		}
	}
	cout << dp[n % 2][n] << endl;
	return 0;
}
