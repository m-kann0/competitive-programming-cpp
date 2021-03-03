#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < ((ll) n); i++)
#define sizeof(x) ((ll) x.size())

int main() {
    ll A, B, C, D;
    cin >> A >> B >> C >> D;

    ll ans = min(B, D) - max(A, C);
    if (ans < 0) ans = 0;
    cout << ans << endl;

    return 0;
}