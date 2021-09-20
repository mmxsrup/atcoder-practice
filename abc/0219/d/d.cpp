#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

const int INF = 1e9;

int dp[310][310][310];

int main () {
    int n; cin >> n;
    int x, y; cin >> x >> y;
    vector<int> a(n), b(n); {
        for (int i = 0; i < n; ++i) {
            cin >> a[i] >> b[i];
        }
    }

    rep(i, 310)rep(j, 310)rep(k, 310) dp[i][j][k] = INF;

    dp[0][0][0] = 0;
    for (int i = 0; i < n; ++i) {
        for (int cnt_a = 0; cnt_a <= x; ++cnt_a) {
            for (int cnt_b = 0; cnt_b <= y; ++cnt_b) {
                if (dp[i][cnt_a][cnt_b] == INF) {
                    continue;
                }

                dp[i + 1][min(x, cnt_a + a[i])][min(y, cnt_b + b[i])] =
                    min(dp[i + 1][min(x, cnt_a + a[i])][min(y, cnt_b + b[i])],
                        dp[i][cnt_a][cnt_b] + 1);

                dp[i + 1][cnt_a][cnt_b] =
                    min(dp[i + 1][cnt_a][cnt_b],
                        dp[i][cnt_a][cnt_b]);
            }
        }
    }

    int ans = INF;
    for (int i = 0; i <= n; ++i) {
        if (dp[i][x][y] != INF) {
            ans = min(ans, dp[i][x][y]);
        }
    }
    cout << (ans == INF ? -1 : ans) << endl;
    return 0;
}
