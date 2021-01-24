#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int a, b, c, k;
    cin >> a >> b >> c >> k;

    int mx = max(a, max(b, c));
    int rm = a + b + c - mx;
    rep(i, k) {
        mx *= 2;
    }

    int ans = mx + rm;
    cout << ans << endl;

    return 0;
}
