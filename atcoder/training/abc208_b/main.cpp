#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    int P;
    cin >> P;

    auto fact = [](int n) {
        int f = 1;
        for (int i = 1; i <= n; ++i) {
            f *= i;
        }
        return f;
    };

    int ans = 0;
    for (int i = 10; i >= 1; i--) {
        int f = fact(i);
        int count = min(P / f, 100);
        // cout << f << ": " << count << endl;
        P -= f * count;
        ans += count;
    }
    cout << ans << endl;

    return 0;
}