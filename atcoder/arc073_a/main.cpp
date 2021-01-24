#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int N;
    ll T;
    cin >> N >> T;
    ll t[N];
    rep(i, N) cin >> t[i];

    ll ans = 0;
    for (int i = 0; i + 1 < N; i++) {
        ans += min(t[i + 1] - t[i], T);
    }
    ans += T;

    cout << ans << endl;

    return 0;
}
