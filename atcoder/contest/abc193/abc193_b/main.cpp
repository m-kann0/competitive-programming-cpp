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
    ll A[N];
    ll P[N];
    ll X[N];
    rep(i, N) {
        cin >> A[i] >> P[i] >> X[i];
    }

    const ll INF = 1'000'000'000'000'000'000;
    ll ans = INF;
    rep(i, N) {
        if (X[i] > A[i]) {
            ans = min(ans, P[i]);
        }
    }
    if (ans >= INF) {
        cout << -1 << endl;
    } else {
        cout << ans << endl;
    }

    return 0;
}