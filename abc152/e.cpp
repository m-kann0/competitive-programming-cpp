#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

const int MOD = 1000000007;

vector<pair<int, int>> factors(int x) {
    vector<pair<int, int>> result;
    for (int i = 2; i * i <= x; i++) {
        if (x % i != 0) {
            continue;
        }
        int count = 0;
        while (x % i == 0) {
            count++;
            x /= i;
        }
        result.emplace_back(i, count);
    }
    if (x != 1) {
        result.emplace_back(x, 1);
    }
    return result;
}

ll modpow(ll a, ll n, ll mod) {
    ll res = 1;
    while (n > 0) {
        if (n & 1) res = res * a % mod;
        a = a * a % mod;
        n >>= 1;
    }
    return res;
}

ll modinv(ll a, ll mod) {
    return modpow(a, mod - 2, mod);
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    
    map<int, int> mp;
    rep(i, n) {
        vector<pair<int, int>> factor = factors(a[i]);
        for (auto p : factor) {
            mp[p.first] = max(mp[p.first], p.second);
        }
    }

    ll lcm = 1;
    for (auto p : mp) {
        rep (i, p.second) {
            lcm = (lcm * p.first) % MOD;
        }
    }

    ll ans = 0;
    rep(i, n) {
        ll b = lcm * modinv(a[i], MOD) % MOD;
        ans += b;
        ans %= MOD;
    }

    cout << ans << endl;
    return 0;
}
