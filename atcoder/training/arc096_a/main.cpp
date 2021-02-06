#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;

    int ans = 1000000000;
    for (int i = 0; i <= max(x, y); i++) {
        int now = 2 * i * c;
        if (i < x) {
            now += a * (x - i);
        }
        if (i < y) {
            now += b * (y - i);
        }
        ans = min(ans, now);
    }
    cout << ans << endl;

    return 0;
}
