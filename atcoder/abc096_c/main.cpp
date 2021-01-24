#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int h, w;
    cin >> h >> w;
    string s[h];
    rep(i, h) cin >> s[i];

    bool ok = true;
    int dh[] = {1, -1, 0, 0};
    int dw[] = {0, 0, 1, -1};
    rep(i, h) {
        rep(j, w) {
            if (s[i][j] != '#') {
                continue;
            }
            int count = 0;
            rep(k, 4) {
                int nh = i + dh[k];
                int nw = j + dw[k];
                if (nh < 0 || nh >= h || nw < 0 || nw >= w) {
                    continue;
                }
                if (s[nh][nw] == '#') {
                    count++;
                }
            }
            if (count == 0) {
                ok = false;
            }
        }
    }

    if (ok) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
