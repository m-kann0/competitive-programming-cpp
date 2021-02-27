#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < ((ll) n); i++)
#define sizeof(x) ((ll) x.size())

bool is_ok(ll n) {
    for (ll p = 2; p * p <= n; p++) {
        ll k = 0;
        while (n % p == 0) {
            n /= p;
            k++;
        }
        if (k == 0) continue;
        if (p > 1) {
            return false;
        }
    }
    return true;
}

int main() {
    ll N;
    cin >> N;

    ll ans = N;
    set<ll> s;
    for (ll i = 2; i * i <= N; i++) {
        ll a = 1;
        ll b = 0;
        while (a <= N) {
            a *= i;
            b += 1;
            if (b > 1 && a <= N && s.count(a) == 0) {
                ans -= 1;
                s.insert(a);
                // printf("%lld\n", a);
            }
        }
    }
    cout << ans << endl;

    return 0;
}