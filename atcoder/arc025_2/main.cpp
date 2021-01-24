#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int h, w;
    cin >> h >> w;
    int c[h][w];
    rep(i, h) {
        rep(j, w) {
            cin >> c[i][j];
        }
    }

    int sb[h + 1][w + 1];
    int sw[h + 1][w + 1];
    rep(i, h + 1) {
        rep(j, w + 1) {
            sb[i][j] = 0;
            sw[i][j] = 0;
        }
    }

    rep(i, h) {
        rep(j, w) {
            int cb, cw;
            if ((i + j) % 2 == 0) {
                cb = c[i][j];
                cw = 0;
            } else {
                cb = 0;
                cw = c[i][j];
            }
            sb[i + 1][j + 1] = cb + sb[i + 1][j] + sb[i][j + 1] - sb[i][j];
            sw[i + 1][j + 1] = cw + sw[i + 1][j] + sw[i][j + 1] - sw[i][j];
        }
    }

    int ans = 0;
    rep(h_from, h) {
        rep(h_to, h + 1) {
            if (h_from >= h_to) {
                continue;
            }
            rep(w_from, w) {
                rep(w_to, w + 1) {
                    if (w_from >= w_to) {
                        continue;
                    }
                    int black = sb[h_to][w_to] + sb[h_from][w_from] - sb[h_to][w_from] - sb[h_from][w_to];
                    int white = sw[h_to][w_to] + sw[h_from][w_from] - sw[h_to][w_from] - sw[h_from][w_to];
                    if (black == white) {
                        ans = max(ans, (h_to - h_from) * (w_to - w_from));
                    }
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}
