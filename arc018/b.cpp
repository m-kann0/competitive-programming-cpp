#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<ll> x(n);
    vector<ll> y(n);
    rep(i, n) cin >> x[i] >> y[i];

    int ans = 0;
    rep(i, n) {
        rep(j, n) {
            rep(k, n) {
                if (i < j && j < k) {
                    ll a = (x[i] - x[k]) * (y[j] - y[k]) - (x[j] - x[k]) * (y[i] - y[k]);
                    if (a != 0 && a % 2 == 0) {
                        ans++;
                    }
                }
            }
        }
    }
    cout << ans << endl;
}
