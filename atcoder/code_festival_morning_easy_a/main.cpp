#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];

    ll sum = 0;
    for (int i = 1; i < n; i++) {
        sum += a[i] - a[i - 1];
    }

    double ans = ((double) sum) / ((double) n - 1);
    printf("%.10f\n", ans);

    return 0;
}
