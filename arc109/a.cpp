#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int a, b, x, y;
    cin >> a >> b >> x >> y;

    int ans = x;
    int r;
    if (a <= b) {
        r = b - a;
    } else {
        r = a - 1 - b;
    }

    if (2 * x < y) {
        ans += r * 2 * x;
    } else {
        ans += r * y;
    }

    cout << ans << endl;

    return 0;
}
