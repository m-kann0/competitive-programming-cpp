#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < ((ll) n); i++)
#define sizeof(x) ((ll) x.size())

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
    ll K;
    cin >> K;

    vector<ll> divisors = enumerate_divisors(K);

    ll ans = 0;
    for (ll a = 1; a <= K; a++) {
        for (ll b = 1; b <= K / a; b++) {
            ll ok = 1;
            ll ng = K + 1;
            while (abs(ok - ng) > 1) {
                ll mid = (ok + ng) / 2;
                if (a * b * mid <= K) {
                    ok = mid;
                } else {
                    ng = mid;
                }
            }
            ans += ok;
        }
    }
    cout << ans << endl;

    return 0;
}