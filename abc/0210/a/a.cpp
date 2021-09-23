#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(int argc, char const *argv[])
{
    int n, a, x, y; cin >> n >> a >> x >> y;
    cout << min(n, a) * x + max(0, n - a)  * y << endl;
    return 0;
}
