#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<pair<ll, ll>> v;
    ll aoki = 0, taka = 0;
    rep(i, n) {
        ll a, b;
        cin >> a >> b;
        aoki += a;
        ll k = 2 * a + b;
        v.emplace_back(k, a);
    }

    sort(v.begin(), v.end(), greater<pair<ll, ll>>());

    int count = 0;
    rep(i, n) {
        if (taka > aoki) {
            break;
        }
        aoki -= v[i].second;
        taka += v[i].first - v[i].second;
        count += 1;
    }

    cout << count << endl;

    return 0;
}
