#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < ((ll) n); i++)
#define sizeof(x) ((ll) x.size())

int main() {
    ll N, K;
    cin >> N >> K;

    ll ans = 1;
    rep(i, N) {
        if (ans < K) {
            ans *= 2;
        } else {
            ans += K;
        }
    }
    cout << ans << endl;

    return 0;
}