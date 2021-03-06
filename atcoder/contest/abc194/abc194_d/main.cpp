#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < ((ll) n); i++)
#define sizeof(x) ((ll) x.size())

int main() {
    ll N;
    cin >> N;

    double ans = 0.0;
    for (int i = 1; i < N; i++) {
        ans += (double) N / i;
    }
    printf("%.12f\n", ans);

    return 0;
}