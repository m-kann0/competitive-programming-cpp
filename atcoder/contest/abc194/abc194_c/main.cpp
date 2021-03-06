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
    rep(i, N) cin >> A[i];

    ll ans = 0;
    ll tot = 0;
    rep(i, N) {
        ans += (N - 1) * A[i] * A[i];
        ans -= 2 * tot * A[i];
        tot += A[i];
    }
    cout << ans << endl;

    return 0;
}