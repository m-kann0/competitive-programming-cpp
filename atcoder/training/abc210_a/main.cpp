#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    int N, A, X, Y;
    cin >> N >> A >> X >> Y;

    int ans;
    if (N > A) {
        ans = X * A + Y * (N - A);
    } else {
        ans = X * N;
    }
    cout << ans << endl;

    return 0;
}