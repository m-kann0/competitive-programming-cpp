#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int a[6];
    rep(i, 6) {
        cin >> a[i];
        a[i]--;
    }

    bool ok = true;
    rep(i, 4) {
        int count = 0;
        rep(j, 6) {
            if (a[j] == i) {
                count++;
            }
        }
        if (count == 0) {
            ok = false;
        }
        if (count >= 3) {
            ok = false;
        }
    }

    if (ok) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
