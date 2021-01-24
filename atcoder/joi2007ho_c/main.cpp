#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;

    set<pair<int, int>> polls;
    vector<pair<int, int>> points;
    rep(i, n) {
        int x, y;
        cin >> x >> y;
        polls.insert(make_pair(x, y));
        points.emplace_back(x, y);
    }

    int ans = 0;
    rep(i, n) {
        rep(j, n) {
            if (i == j) {
                continue;
            }
            int x1 = points[i].first;
            int y1 = points[i].second;
            int x2 = points[j].first;
            int y2 = points[j].second;
            int x3 = x2 + (y1 - y2);
            int y3 = y2 + (x2 - x1);
            int x4 = x1 + (y1 - y2);
            int y4 = y1 + (x2 - x1);
            if (polls.count(make_pair(x3, y3)) > 0 && polls.count(make_pair(x4, y4)) > 0) {
                ans = max(ans, (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
            }
        }
    }
    cout << ans << endl;

    return 0;
}
