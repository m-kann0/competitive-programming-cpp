#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    int a[n];
    rep(i, n) cin >> a[i];
    int q;
    cin >> q;
    int m[q];
    rep(i, q) cin >> m[i];

    set<int> candidates;
    for (int bit = 0; bit < (1 << n); bit++) {
        int total = 0;
        rep(j, n) {
            if (bit & (1 << j)) {
                total += a[j];
            }
        }
        candidates.insert(total);
    }

    rep(i, q) {
        if (candidates.count(m[i])) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }

    return 0;
}
