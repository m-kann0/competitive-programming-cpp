#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    int a[1 << n];
    rep(i, 1<<n) {
        cin >> a[i];
    }

    pair<int, int> x = make_pair(0, 0);
    rep(i, 1<<(n - 1)) {
        if (a[i] > x.second) {
            x = make_pair(i, a[i]);
        }
    }

    pair<int, int> y = make_pair(0, 0);
    for (int i = (1 << (n - 1)); i < (1 << n); i++) {
        if (a[i] > y.second) {
            y = make_pair(i, a[i]);
        }
    }

    if (x.second > y.second) {
        cout << (y.first + 1) << endl;
    } else {
        cout << (x.first + 1) << endl;
    }

    return 0;
}
