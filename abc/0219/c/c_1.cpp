#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main () {
    string x; cin >> x;

    map<char, int> mp; {
        for (int i = 0; i < (int)x.size(); ++i) {
            mp[x[i]] = i + 1;
        }
    }

    int n; cin >> n;
    vector<string> s(n); {
        for (int i = 0; i < n; ++i) {
            cin >> s[i];
        }        
    }

    vector<pair<ll, int>> v; {
        for (int i = 0; i < n; ++i) {
            ll val = 0;
            for (int j = 0; j < 10; ++j) {
                if (j < (int)s[i].size()) {
                    val = val * 27 + mp[s[i][j]];
                } else {
                    val = val * 27;
                }
            }
            v.push_back(make_pair(val, i));
        }
        sort(v.begin(), v.end());
    }

    for (auto u : v) {
        cout << s[u.second] << endl;
    }

    return 0;
}
