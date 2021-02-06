#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    string a, b, c;
    cin >> a >> b >> c;

    int ans = 0;
    rep(i, n) {
        if (a[i] == b[i] && b[i] == c[i] && c[i] == a[i]) {
            continue;
        }
        if (a[i] == b[i] || b[i] == c[i] || c[i] == a[i]) {
            ans += 1;
        } else {
            ans += 2;
        }
    }
    cout << ans << endl;

    return 0;
}
