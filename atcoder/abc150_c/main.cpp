#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

bool same(vector<int> x, vector<int> y, int n) {
    rep(i, n) {
        if (x[i] != y[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    vector<int> p(n), q(n);
    rep(i, n) cin >> p[i];
    rep(i, n) cin >> q[i];

    vector<int> perm(n);
    rep(i, n) perm[i] = i + 1;

    int a, b;
    int number = 1;
    do {
        if (same(p, perm, n)) {
            a = number;
        }
        if (same(q, perm, n)) {
            b = number;
        }
        number++;
    } while (next_permutation(perm.begin(), perm.end()));

    cout << abs(a - b) << endl;

    return 0;
}
