#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int R, C;
    cin >> R >> C;
    int sy, sx, gy, gx;
    cin >> sy >> sx >> gy >> gx;
    sy--; sx--; gy--; gx--;
    vector<string> grid(R);
    rep(y, R) {
        cin >> grid[y];
    }

    const int INF = 100000;
    int dy[4] = {-1, 1, 0, 0};
    int dx[4] = {0, 0, -1, 1};

    vector<vector<int>> dist(R, vector(C, INF));
    dist[sy][sx] = 0;
    queue<pair<int, int>> q;
    q.emplace(sy, sx);
    while (!q.empty()) {
        pair<int, int> p = q.front(); q.pop();
        int cy = p.first;
        int cx = p.second;
        rep(i, 4) {
            int ny = cy + dy[i];
            int nx = cx + dx[i];
            if (grid[ny][nx] == '#' || dist[ny][nx] != INF) {
                continue;
            }
            dist[ny][nx] = dist[cy][cx] + 1;
            q.emplace(ny, nx);
        }
    }

    cout << dist[gy][gx] << endl;

    return 0;
}
