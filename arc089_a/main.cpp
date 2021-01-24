#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    int t[n + 1], x[n + 1], y[n + 1];
    t[0] = 0; x[0] = 0; y[0] = 0;
    rep(i, n) cin >> t[i + 1] >> x[i + 1] >> y[i + 1];

    bool ok = true;
    rep(i, n) {
        if ((t[i + 1] % 2) != ((x[i + 1] + y[i + 1]) % 2)) {
            ok = false;
            break;
        }
        if ((abs(x[i + 1] - x[i]) + abs(y[i + 1] - y[i])) > (t[i + 1] - t[i])) {
            ok = false;
            break;
        }
    }

    if (ok) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
