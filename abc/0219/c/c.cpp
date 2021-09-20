#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int get_pos(const string &s, char x) {
    for (int i = 0; i < (int)s.size(); ++i) {
        if (s[i] == x) {
            return i;
        }
    }
    return -1;
}

int main () {
    string x; cin >> x;
    int n; cin >> n;
    vector<string> s(n); {
        for (int i = 0; i < n; ++i) {
            cin >> s[i];
        }
    }

    sort(s.begin(), s.end(), [&](const string &s1, const string &s2) {
        for (int i = 0; i < min<int>(s1.size(), s2.size()); ++i) {
            if (s1[i] != s2[i]) {
                return get_pos(x, s1[i]) < get_pos(x, s2[i]);
            }
        }
        return s1.size() < s2.size();
    });

    for (auto& u : s) {
        cout << u << endl;
    }

    return 0;
}
