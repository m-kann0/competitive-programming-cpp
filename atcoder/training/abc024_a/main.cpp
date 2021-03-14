#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < ((ll) n); i++)
#define sizeof(x) ((ll) x.size())

int main() {
    ll A, B, C, K, S, T;
    cin >> A >> B >> C >> K >> S >> T;

    ll ans = A * S + B * T;
    if ((S + T) >= K) {
        ans -= C * (S + T);
    }
    cout << ans << endl;

    return 0;
}