#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> s(H);
    rep(i, H) cin >> s[i];

    int dh[9] = {-1, -1, -1, 0, 0, 0, 1, 1, 1};
    int dw[9] = {-1, 0, 1, -1, 0, 1, -1, 0, 1};

    int ans = 0;
    rep(i, H) {
        rep(j, W) {
            if (s[i][j] != '#') {
                continue;
            }

            if (s[i - 1][j - 1] == '.' && s[i - 1][j] == '.' && s[i][j - 1] == '.') {
                ans++;
            }
            if (s[i - 1][j + 1] == '.' && s[i - 1][j] == '.' && s[i][j + 1] == '.') {
                ans++;
            }
            if (s[i][j - 1] == '.' && s[i + 1][j - 1] == '.' && s[i + 1][j] == '.') {
                ans++;
            }
            if (s[i][j + 1] == '.' && s[i + 1][j] == '.' && s[i + 1][j + 1] == '.') {
                ans++;
            }

            if (s[i - 1][j - 1] == '.' && s[i - 1][j] == '#' && s[i][j - 1] == '#') {
                ans++;
            }
            if (s[i - 1][j + 1] == '.' && s[i - 1][j] == '#' && s[i][j + 1] == '#') {
                ans++;
            }
            if (s[i + 1][j - 1] == '.' && s[i + 1][j] == '#' && s[i][j - 1] == '#') {
                ans++;
            }
            if (s[i + 1][j + 1] == '.' && s[i + 1][j] == '#' && s[i][j + 1] == '#') {
                ans++;
            }
        }
    }
    cout << ans << endl;

    return 0;
}
