#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < ((ll) n); i++)
#define sizeof(x) ((ll) x.size())

int main() {
    ll N;
    cin >> N;

    ll ans = 0;
    for (ll a = 1; a * a <= N; a++) {
        ans = a * a;
    }
    cout << ans << endl;

    return 0;
}