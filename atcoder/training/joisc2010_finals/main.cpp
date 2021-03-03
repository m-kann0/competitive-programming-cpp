#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < ((ll) n); i++)
#define sizeof(x) ((ll) x.size())

int main() {
    ll N, M, K;
    cin >> N >> M >> K;
    vector<tuple<ll, ll, ll>> edges;
    rep(i, M) {
        ll A, B, C;
        cin >> A >> B >> C;
        A--; B--;
        edges.push_back(make_tuple(C, A, B));
    }

    sort(edges.begin(), edges.end());

    ll ans = 0;
    dsu uf(N);
    ll groups = N;
    for (auto edge : edges) {
        if (groups == K) {
            break;
        }
        ll A = get<1>(edge);
        ll B = get<2>(edge);
        ll C = get<0>(edge);
        if (!uf.same(A, B)) {
            ans += C;
            groups--;
            uf.merge(A, B);
        }
    }
    cout << ans << endl;

    return 0;
}