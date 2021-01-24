#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n, x;
    cin >> n >> x;
    int m[n];
    rep(i, n) cin >> m[i];

    int sum = 0;
    int mn = 100000;
    rep(i, n) {
        sum += m[i];
        mn = min(mn, m[i]);
    }

    int ans = n + (x - sum) / mn;
    cout << ans << endl;

    return 0;
}
