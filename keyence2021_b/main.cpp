#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n, k;
    cin >> n >> k;
    int a[n];
    rep(i, n) {
        cin >> a[i];
    }

    vector<int> count(300005, 0);
    rep(i, n) {
        count[a[i]]++;
    }

    ll ans = 0;
    int mn = k;
    rep(i, 300005) {
        if (count[i] < mn) {
            ans += i * ((ll) mn - count[i]);
            mn = count[i];
        }
        if (mn == 0) {
            break;
        }
    }

    cout << ans << endl;

    return 0;
}
