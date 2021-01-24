#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int N, C;
    cin >> N >> C;
    vector<vector<pair<int, int>>> v(C);
    rep(i, N) {
        int s, t, c;
        cin >> s >> t >> c;
        c--;
        v[c].emplace_back(s, t);
    }
    vector<pair<int, int>> range;
    rep(i, C) {
        if (v[i].empty()) {
            continue;
        }
        sort(v[i].begin(), v[i].end());
        range.emplace_back(v[i][0].first, v[i][0].second);
        for (int j = 1; j < v[i].size(); j++) {
            if (range[range.size() - 1].second == v[i][j].first) {
                range[range.size() - 1].second = v[i][j].second;
            } else {
                range.emplace_back(v[i][j].first, v[i][j].second);
            }
        }
    }
    sort(range.begin(), range.end());

    vector<int> ends(C, 0);
    rep(i, range.size()) {
        for (int j = C - 1; j >= 0; j--) {
            if (range[i].first > ends[j]) {
                ends[j] = range[i].second;
                break;
            }
        }
        sort(ends.begin(), ends.end());
    }

    int ans = 0;
    rep(i, C) {
        if (ends[i] != 0) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
