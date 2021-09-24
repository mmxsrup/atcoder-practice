#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

double solve(int x1, int y1, int x2, int y2) {
    if (x1 > x2) {
        swap(x1, x2);
        swap(y1, y2);
    }

    return (double)(y2 - y1) / (double)(x2 - x1);
}

int main(int argc, char const *argv[])
{
    int n; cin >> n;
    vector<int> x(n), y(n); {
        for (int i = 0; i < n; ++i) {
            cin >> x[i] >> y[i];
        }
    }

    int ans = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            double r = solve(x[i], y[i], x[j], y[j]);
            if (-1 <= r && r <= 1) {
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
