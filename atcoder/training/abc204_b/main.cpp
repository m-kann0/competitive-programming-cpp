#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    rep(i, N) cin >> A[i];

    int ans = 0;
    for (int& a : A) {
        if (a > 10) {
            ans += a - 10;
        }
    }
    cout << ans << endl;

    return 0;
}