#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    int x, y;
    cin >> x >> y;

    if (x == y) {
        cout << x << endl;
    } else {
        int ans = 3 - x - y;
        cout << ans << endl;
    }

    return 0;
}