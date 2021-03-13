#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < ((ll) n); i++)
#define sizeof(x) ((ll) x.size())

int main() {
    ll N, M, Q;
    cin >> N >> M >> Q;
    vector<P> VW(N);
    rep(i, N) {
        ll W, V;
        cin >> W >> V;
        VW.emplace_back(-V, W);
    }
    vector<ll> X(M);
    rep(i, M) cin >> X[i];

    sort(VW.begin(), VW.end());

    rep(i, Q) {
        ll L, R;
        cin >> L >> R;
        L--; R--;

        vector<ll> box;
        rep(i, M) {
            if (L <= i && i <= R) {
                continue;
            }
            box.push_back(X[i]);
        }
        sort(box.begin(), box.end());
        vector<bool> used(box.size(), false);
        ll ans = 0;
        rep(j, N) {
            ll V = -VW[j].first;
            ll W = VW[j].second;
            rep(k, sizeof(box)) {
                if (!used[k] && box[k] >= W) {
                    ans += V;
                    used[k] = true;
                    break;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}