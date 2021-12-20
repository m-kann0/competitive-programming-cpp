#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < ((ll) n); i++)
#define sizeof(x) ((ll) x.size())

int H, W, X, Y;

int main() {
    cin >> H >> W >> X >> Y;
    X--; Y--;

    vector<string> map;
    rep (i, H) {
        string line;
        cin >> line;
        map.push_back(line);
    }

    vector<int> dx = {-1, 1, 0, 0};
    vector<int> dy = {0, 0, -1, 1};

    int ans = -3;
    rep (i, 4) {
        int cx = X;
        int cy = Y;
        while (cx >= 0 && cx < H && cy >= 0 && cy < W) {
            if (map[cx][cy] == '.') {
                ans++;
            } else {
                break;
            }
            cx += dx[i];
            cy += dy[i];
        }
    }
    cout << ans << endl;

    return 0;
}