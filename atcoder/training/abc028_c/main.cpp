#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int a[5];
    rep(i, 5) cin >> a[i];
    vector<bool> s(301, false);
    rep(i, 5) {
        rep(j, 5) {
            rep(k, 5) {
                if (i == j || j == k || k == i) {
                    continue;
                }
                s[a[i] + a[j] + a[k]] = true;
            }
        }
    }

    vector<int> t;
    rep(i, 301) {
        if (s[i]) {
            t.push_back(i);
        }
    }

    cout << t[t.size() - 3] << endl;

    return 0;
}
