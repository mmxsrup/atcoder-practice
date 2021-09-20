#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int main () {
    string s1, s2, s3, t;
    cin >> s1 >> s2 >> s3 >> t;

    string ans = "";
    for (auto u : t) {
        if (u == '1') {
            ans += s1;
        } else if (u == '2') {
            ans += s2;
        } else {
            ans += s3;
        }
    }
    cout << ans << endl;
    return 0;
}
