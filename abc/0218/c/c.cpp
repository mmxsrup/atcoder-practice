#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> read(vector<string> &s) {
	int n = s.size();
	vector<pair<int, int>> v;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (s[i][j] == '#') {
				v.push_back(make_pair(i, j));
			}
		}
	}
	return v;
}

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	vector<string> s(n), t(n); {
		for (int i = 0; i < n; ++i) {
			cin >> s[i];
		}
		for (int i = 0; i < n; ++i) {
			cin >> t[i];
		}
	}

	if (n == 1) {
		cout << (s[0] == t[0] ? "Yes" : "No") << endl;
		return 0;
	}

	auto vec_s = read(s);
	auto vec_t = read(t);

	if (vec_s.size() != vec_t.size()) {
		cout << "No" << endl;
		return 0;
	}

	bool ans = false;

	for (int i = 0; i < 4; ++i) {
		sort(vec_s.begin(), vec_s.end());
		sort(vec_t.begin(), vec_t.end());

		bool flag = true;
		for (int j = 1; j < (int)vec_s.size(); ++j) {
			if (vec_s[j].first - vec_s[0].first != vec_t[j].first - vec_t[0].first ||
				vec_s[j].second - vec_s[0].second != vec_t[j].second - vec_t[0].second) {
				flag = false;
				break;
			}
		}

		if (flag) {
			ans = true;
		}

		vector<pair<int, int>> r_vec_s;
		for (auto d : vec_s) {
			r_vec_s.push_back(make_pair(d.second, -d.first));
		}
		vec_s = r_vec_s;
	}

	cout << (ans ? "Yes" : "No") << endl;
	return 0;
}
