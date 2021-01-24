#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    ll a, b, c;
    cin >> a >> b >> c;

    ll ans = b;
    ans += min(c, a + b + 1);

    cout << ans << endl;

    return 0;
}
