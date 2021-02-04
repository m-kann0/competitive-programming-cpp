#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n;
    ll c;
    cin >> n >> c;
    map<int, ll> mp;
    rep(i, n) {
        int a, b;
        ll ci;
        cin >> a >> b >> ci;
        mp[a] += ci;
        mp[b + 1] -= ci;
    }

    ll ans = 0;
    ll cost = 0;
    ll prev = 0;
    for (auto entry : mp) {
        // printf("cost=%lld, c=%lld\n", cost, c);
        if (cost < c) {
            // cout << "A" << endl;
            ans += cost * (entry.first - prev);
        } else {
            // cout << "B" << endl;
            ans += c * (entry.first - prev);
        }
        cost += entry.second;
        prev = entry.first;
        // printf("ans = %lld\n", ans);
    }
    cout << ans << endl;

    return 0;
}
