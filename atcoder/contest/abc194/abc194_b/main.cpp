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
    vector<P> A, B;
    rep(i, N) {
        ll a, b;
        cin >> a >> b;
        A.emplace_back(a, i);
        B.emplace_back(b, i);
    }

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    if (N == 1) {
        ll ans = A[0].first + B[0].first;
        cout << ans << endl;
        return 0;
    }

    if (A[0].second != B[0].second) {
        ll ans = max(A[0].first, B[0].first);
        cout << ans << endl;
        return 0;
    }

    ll ans = A[0].first + B[0].first;
    ans = min(ans, max(A[1].first, B[0].first));
    ans = min(ans, max(A[0].first, B[1].first));
    cout << ans << endl;

    return 0;
}