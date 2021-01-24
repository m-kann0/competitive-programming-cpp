#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    string s;
    cin >> s;

    int ans = 0;
    for (int l = 0; l < s.size(); l++) {
        for (int r = l + 1; r <= s.size(); r++) {
            bool ok = true;
            for (int i = l; i < r; i++) {
                if (s[i] != 'A' && s[i] != 'C' && s[i] != 'G' && s[i] != 'T') {
                    ok = false;
                }
            }
            if (ok) {
                ans = max(ans, r - l);
            }
        }
    }
    cout << ans << endl;

    return 0;
}
