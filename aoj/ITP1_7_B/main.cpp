#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    while (true) {
        int n, x;
        cin >> n >> x;
        if (n == 0 && x == 0) {
            break;
        }
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = i + 1; j <= n; j++) {
                for (int k = j + 1; k <= n; k++) {
                    if (i + k + j == x) {
                        ans++;
                    }
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}
