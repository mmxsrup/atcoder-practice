#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(int argc, char const *argv[])
{
    int n; cin >> n;
    vector<ll> v(n); ll sum = 0; {
        for (int i = 0; i < n; ++i) {
            int a, b; cin >> a >> b;
            v[i] = 2 * a + b;
            sum -= a;
        }
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
    }

    for (int i = 0; i < n; ++i) {
        sum += v[i];
        if (sum > 0) {
            cout << i + 1 << endl;
            return 0;
        }
    }
    return 0;
}
