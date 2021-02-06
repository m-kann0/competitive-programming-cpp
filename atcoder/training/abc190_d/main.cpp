#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

//int main() {
//    ll s;
//    cin >> s;
//
//    ll ans = 0;
//    for (ll n = 1; n * n < s * 2; n++) {
//        if ((2 * s - n * n + n) % (2 * n) == 0) {
//            ans += 2;
//        }
//    }
//    cout << ans << endl;
//
//    return 0;
//}

vector<ll> enumerate_divisors(ll n) {
    vector<ll> res;
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            res.push_back(i);
            if (n / i != i) {
                res.push_back(n / i);
            }
        }
    }
    sort(res.begin(), res.end());
    return res;
}

int main() {
    ll n;
    cin >> n;
    vector<ll> divisors = enumerate_divisors(2 * n);
    int ans = 0;
    for (auto l : divisors) {
        if ((2 * n / l - l + 1) % 2 == 0) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
