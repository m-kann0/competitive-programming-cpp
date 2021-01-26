#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n;
    string s;
    cin >> n >> s;

    if (n % 2 == 1) {
        cout << -1 << endl;
        return 0;
    }

    int ans = 0;
    rep(i, n / 2) {
        if (s[i] != s[i + n / 2]) {
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}
