#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(int argc, char const *argv[])
{
    int n; cin >> n;
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        int a; cin >> a;
        sum += max(0, a - 10);
    }
    cout << sum << endl;
    return 0;
}
