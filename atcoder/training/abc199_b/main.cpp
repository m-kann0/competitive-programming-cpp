#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    int N;
    cin >> N;
    vector<int> A(N), B(N);
    rep(i, N) cin >> A[i];
    rep(i, N) cin >> B[i];

    int ans = 0;
    for (int x = 1; x <= 1000; ++x) {
        bool ok = true;
        for (int i = 0; i < N; ++i) {
            if (x < A[i] || x > B[i]) {
                ok = false;
            }
        }
        if (ok) {
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}