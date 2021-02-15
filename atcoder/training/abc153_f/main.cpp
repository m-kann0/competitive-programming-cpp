#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < (n); i++)

int main() {
    ll N, D, A;
    cin >> N >> D >> A;
    vector<P> v(N);
    rep(i, N) {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end());

    ll ans = 0;
    queue<P> q;
    ll i = 0;
    ll damage = 0;
    while (i < N) {
        ll x = v[i].first;
        ll hp = v[i].second;
        while (!q.empty()) {
            if (q.front().first <= x) {
                damage += q.front().second; q.pop();
            } else {
                break;
            }
        }
        hp -= damage;
        if (hp > 0) {
            ll count = (hp + A - 1) / A;
            ans += count;
            damage += A * count;
            q.emplace(x + 2 * D + 1, -A * count);
        }
        i++;
    }
    cout << ans << endl;

    return 0;
}