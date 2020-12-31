#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;

    int ans = 0;
    rep(i, n) {
        int m;
        cin >> m;
        if (m < 80) {
            ans += 80 - m;
        }
    }

    cout << ans << endl;

    return 0;
}
