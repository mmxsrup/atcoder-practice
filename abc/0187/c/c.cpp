#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(int argc, char const *argv[])
{
    int n; cin >> n;
    vector<string> s(n); set<string> st; {
        for (int i = 0; i < n; ++i) {
            cin >> s[i];
            st.insert(s[i]);
        }
    }

    for (int i = 0; i < n; ++i) {
        if (st.count("!" + s[i]) == 1) {
            cout << s[i] << endl;
            return 0;
        }
    }

    cout << "satisfiable" << endl;
    return 0;
}
