#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    int N, X;
    cin >> N >> X;
    vector<int> A(N);
    rep(i, N) cin >> A[i];

    int total = 0;
    rep(i, N) {
        if (i % 2 == 0) {
            total += A[i];
        } else {
            total += A[i] - 1;
        }
    }

    if (total <= X) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}