#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    rep(i, n) {
        int a, b;
        cin >> a >> b;
        v.emplace_back(a, b);
    }

    sort(v.begin(), v.end());

    int ans = 0;
    rep(i, n - 1) {
        ans += min(v[i + 1].first - v[i].first, v[i].second - v[i + 1].second);
    }
    ans += v[0].first - 1;
    ans += v[n - 1].second + 1;

    cout << ans << endl;

    return 0;
}
