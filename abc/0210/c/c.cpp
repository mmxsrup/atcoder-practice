#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(int argc, char const *argv[])
{
    int n, k; cin >> n >> k;
    vector<int> c(n); {
        for (int i = 0; i < n; ++i) {
            cin >> c[i];
        }
    }

    map<int, int> ma;
    for (int i = 0; i < k; ++i) {
        ma[c[i]]++;
    }

    int ans = ma.size();

    for (int i = k; i < n ; ++i) {
        int key_l = c[i - k];
        int key_r = c[i];

        ma[key_l]--;
        ma[key_r]++;

        if (ma[key_l] == 0) {
            ma.erase(key_l);
        }

        ans = max(ans, (int)ma.size());
    }

    cout << ans << endl;
    return 0;
}
