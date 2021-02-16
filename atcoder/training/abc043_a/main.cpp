#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < (n); i++)

int main() {
    ll N;
    cin >> N;

    ll ans = N * (N + 1) / 2;
    cout << ans << endl;

    return 0;
}