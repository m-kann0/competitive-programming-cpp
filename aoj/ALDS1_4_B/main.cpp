#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    int s[n];
    rep(i, n) cin >> s[i];
    int q;
    cin >> q;
    int t[q];
    rep(i, q) cin >> t[i];

    int ans = 0;
    rep(i, q) {
        int ok = 0;
        int ng = n;
        while (abs(ok - ng) > 1) {
            int mid = (ok + ng) / 2;
            if (s[mid] <= t[i]) {
                ok = mid;
            } else {
                ng = mid;
            }
        }
        if (s[ok] == t[i]) {
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}
