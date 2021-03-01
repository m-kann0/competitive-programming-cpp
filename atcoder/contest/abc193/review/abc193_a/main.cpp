#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < ((ll) n); i++)
#define sizeof(x) ((ll) x.size())

int main() {
    ll A, B;
    cin >> A >> B;

    double ans = (double) (A - B) / A * 100.0;
    printf("%.10f\n", ans);

    return 0;
}