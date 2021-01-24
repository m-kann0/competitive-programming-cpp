#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

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
    int n;
    cin >> n;

    int ans = 0;
    for (int i = 1; i <= n; i += 2) {
        vector<ll> divisors = enumerate_divisors(i);
        if (divisors.size() == 8) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
