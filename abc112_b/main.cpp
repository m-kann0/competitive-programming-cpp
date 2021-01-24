#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int N, T;
    cin >> N >> T;
    int c[N];
    int t[N];
    rep(i, N) {
        cin >> c[i] >> t[i];
    }

    int ans = 1001;
    rep(i, N) {
        if (t[i] <= T) {
            ans = min(ans, c[i]);
        }
    }

    if (ans == 1001) {
        cout << "TLE" << endl;
    } else {
        cout << ans << endl;
    }

    return 0;
}
