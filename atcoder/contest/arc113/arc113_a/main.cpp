#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < ((ll) n); i++)
#define sizeof(x) ((ll) x.size())

int main() {
    ll K;
    cin >> K;

    ll ans = 0;
    for (ll a = 1; a <= K; a++) {
        for (ll b = 1; b <= K / a; b++) {
            ll c = K / (a * b);
            ans += c;
        }
    }
    cout << ans << endl;

    return 0;
}