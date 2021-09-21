#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(int argc, char const *argv[])
{
    int x, y; cin >> x >> y;
    set<int> st;
    st.insert(x); st.insert(y);

    if (st.size() == 1) {
        cout << x << endl;
    } else {
        for (int i = 0; i < 3; ++i) {
            if (st.count(i) == 0) {
                cout << i << endl;
            }
        }
    }
    return 0;
}
