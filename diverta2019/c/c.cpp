#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	vector<string> s(n); rep(i, n) cin >> s[i];
	queue<int> ba, b, a, other;
	rep(i, n) {
		if (s[i].front() == 'B' and s[i].back() == 'A') ba.push(i);
		else if (s[i].front() == 'B') b.push(i);
		else if (s[i].back() == 'A') a.push(i);
		else other.push(i);
	}

	//  [other] - [*a] - [b*a] [b*a] ... [b*a] - [b*] - [*a] [b*] .. [*a][b*]
	string t;
	while (not other.empty()) {
		t += s[other.front()]; other.pop();
	}
	if (ba.size() > 0) {
		if (a.size() > 0 and b.size() > 0) {
			t += s[a.front()]; a.pop();
			while (not ba.empty()) {
				t += s[ba.front()]; ba.pop();
			}
			t += s[b.front()]; b.pop();
		} else if (a.size() > 0) {
			t += s[a.front()]; a.pop();
			while (not ba.empty()) {
				t += s[ba.front()]; ba.pop();
			}			
		} else if (b.size() > 0) {
			while (not ba.empty()) {
				t += s[ba.front()]; ba.pop();
			}			
			t += s[b.front()]; b.pop();
		} else {
			while (not ba.empty()) {
				t += s[ba.front()]; ba.pop();
			}		
		}
	}

	while (not b.empty() and not a.empty()) {
		t += s[a.front()]; a.pop();
		t += s[b.front()]; b.pop();
	}

	while (not b.empty()) {
		t += s[b.front()]; b.pop();
	}

	while (not a.empty()) {
		t += s[a.front()]; a.pop();
	}

	int ans = 0;
	rep(i, (int)t.size() - 1) {
		if (t[i] == 'A' and t[i + 1] == 'B') ans++;
	}
	cout << ans << endl;
	return 0;
}
