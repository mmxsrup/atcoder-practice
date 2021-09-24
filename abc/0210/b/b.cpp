#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(int argc, char const *argv[])
{
    int n; cin >> n;
    string s; cin >> s;

    for (int i = 0; i < (int)s.size(); ++i) {
        if (s[i] == '1') {
            cout << (i % 2 == 0 ? "Takahashi" : "Aoki") << endl;
            break;
        }
    }
    return 0;
}
