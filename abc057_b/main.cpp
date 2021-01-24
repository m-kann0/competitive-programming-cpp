#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n], b[n];
    rep(i, n) cin >> a[i] >> b[i];
    int c[m], d[m];
    rep(i, m) cin >> c[i] >> d[i];

    rep(i, n) {
        int no = 1;
        int min_diff = abs(a[i] - c[0]) + abs(b[i] - d[0]);
        for (int j = 1; j < m; j++) {
            int cur_diff = abs(a[i] - c[j]) + abs(b[i] - d[j]);
            if (cur_diff < min_diff) {
                no = j + 1;
                min_diff = cur_diff;
            }
        }
        cout << no << endl;
    }

    return 0;
}
