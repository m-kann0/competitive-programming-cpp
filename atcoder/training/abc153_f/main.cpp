#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); i++)

int main() {
    ll N, D, A;
    cin >> N >> D >> A;
    vector<pair<ll, ll>> v;
    rep(i, N) {
        ll X, H;
        cin >> X >> H;
        v.emplace_back(X, H);
    }
    // ll X[N], H[N];
    // rep(i, N) cin >> X[i] >> H[i];

    sort(v.begin(), v.end());

    ll ans = 0;
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    ll i = 0;
    ll damage = 0;
    while (i < N) {
        ll x = v[i].first;
        ll hp = v[i].second;
        while (!pq.empty()) {
            if (pq.top().first <= x) {
                damage += pq.top().second; pq.pop();
            } else {
                break;
            }
        }
        hp -= damage;
        if (hp > 0) {
            ll count = (hp + A - 1) / A;
            ans += count;
            damage += A * count;
            pq.emplace(x + 2 * D + 1, -A * count);
        }
        i++;
    }
    cout << ans << endl;

    return 0;
}