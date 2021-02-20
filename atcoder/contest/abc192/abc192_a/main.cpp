#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < (n); i++)

int main() {
    ll X;
    cin >> X;

    ll ans = 100 - (X % 100);
    cout << ans << endl;

    return 0;
}