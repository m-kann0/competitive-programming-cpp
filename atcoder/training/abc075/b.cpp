#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> grid(h);
    rep(i, h) cin >> grid[i];

    rep(ch, h) {
        rep(cw, w) {
            if (grid[ch][cw] == '#') {
                cout << '#';
                continue;
            }
            int count = 0;
            for (int dh = -1; dh <= 1; dh++) {
                for (int dw = -1; dw <= 1; dw++) {
                    int nh = ch + dh;
                    int nw = cw + dw;
                    if (nh < 0 || nh >= h || nw < 0 || nw >= w) {
                        continue;
                    }
                    if (grid[nh][nw] == '#') {
                        count++;
                    }
                }
            }
            cout << count;
        }
        cout << endl;
    }
}
