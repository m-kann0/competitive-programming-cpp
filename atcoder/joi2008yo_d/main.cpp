#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int m;
    cin >> m;
    int mx[m], my[m];
    rep(i, m) cin >> mx[i] >> my[i];
    int n;
    cin >> n;
    int nx[n], ny[n];
    set<pair<int, int>> s;
    rep(i, n) {
        cin >> nx[i] >> ny[i];
        s.insert(make_pair(nx[i], ny[i]));
    }

    rep(i, n) {
        int dx = nx[i] - mx[0];
        int dy = ny[i] - my[0];
        bool ok = true;
        rep(j, m) {
            if (s.count(make_pair(mx[j] + dx, my[j] + dy)) == 0) {
                ok = false;
                break;
            }
        }
        if (ok) {
            printf("%d %d\n", dx, dy);
            break;
        }
    }

    return 0;
}
