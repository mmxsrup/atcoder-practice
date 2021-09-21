#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const int INF = 1e9;

// dp[i][j] := i番目までみて、1台目のオーブンを時間jまで使ったときに、
//             2台目のオーブンの使用時間の最小値
int dp[110][110000];

int main(int argc, char const *argv[])
{
    int n; cin >> n;
    vector<int> t(n); {
        for (int i = 0; i < n; ++i) {
            cin >> t[i];
        }
    }

    for (int i = 0; i < 110; ++i) {
        for (int j = 0; j < 110000; ++j) {
            dp[i][j] = INF;
        }
    }
    dp[0][0] = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= 100000; ++j) {
            if (dp[i][j] == INF) {
                continue;
            }
            dp[i + 1][j + t[i]] = min(dp[i + 1][j + t[i]], dp[i][j]);
            dp[i + 1][j] = min(dp[i + 1][j], dp[i][j] + t[i]);
        }
    }

    int ans = INF;
    for (int i = 0; i <= 100000; ++i) {
        ans = min(ans, max(i, dp[n][i]));
    }
    cout << ans << endl;
    return 0;
}
