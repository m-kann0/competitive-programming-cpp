#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int N, M;
    cin >> N >> M;
    vector<ll> A(N);
    rep(i, N) cin >> A[i];
    vector<vector<int>> G(N);
    rep(i, M) {
        int X, Y;
        cin >> X >> Y;
        X--; Y--;
        G[X].push_back(Y);
    }

    vector<ll> B(N);
    rep(i, N) B[i] = A[i];
    rep(u, N) {
        for (int v : G[u]) {
            B[v] = min(B[v], B[u]);
        }
    }

    ll ans = -1001001001;
    rep(u, N) {
        for (int v : G[u]) {
            ans = max(ans, A[v] - B[u]);
        }
    }
    cout << ans << endl;

    return 0;
}
