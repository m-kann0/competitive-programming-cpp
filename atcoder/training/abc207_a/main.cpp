#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    // int ans = A + B + C - min(A, min(B, C));
    int ans = A + B + C - min({A, B, C});
    cout << ans << endl;

    return 0;
}