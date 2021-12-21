#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    int A, B;
    cin >> A >> B;

    double ans = (A - B) / 3.0 + B;
    printf("%.10f\n", ans);

    return 0;
}