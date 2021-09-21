#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(int argc, char const *argv[])
{
    int n, m; cin >> n >> m;
    vector<vector<int>> g(n); {
        for (int i = 0; i < m; ++i) {
            int a, b; cin >> a >> b;
            a--; b--;
            g[a].push_back(b);
        }
    }

    int ans = 0;
    for (int start = 0; start < n; start++) {
        queue<int> que;
        vector<int> visited(n, 0);

        que.push(start);
        visited[start] = 1;

        while (!que.empty()) {
            int u = que.front(); que.pop();
            // u -> v
            for (const int v : g[u]) {
                if (visited[v] == 0) {
                    visited[v] = 1;
                    que.push(v);
                }
            }
        }
        ans += accumulate(visited.begin(), visited.end(), 0);
    }
    cout << ans << endl;
    return 0;
}
