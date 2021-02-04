#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<string> w(n);
    rep(i, n) cin >> w[i];

    int loser = -1;
    vector<string> used;
    used.push_back(w[0]);
    for (int i = 1; i < n; i++) {
        if (w[i - 1].back() != w[i].front()) {
            loser = i;
            break;
        }
        bool ok = true;
        for (string u : used) {
            if (u == w[i]) {
                ok = false;
                break;
            }
        }
        if (!ok) {
            loser = i;
            break;
        }
        used.push_back(w[i]);
    }

    if (loser == -1) {
        cout << "DRAW" << endl;
    } else if (loser % 2 == 0) {
        cout << "LOSE" << endl;
    } else {
        cout << "WIN" << endl;
    }

    return 0;
}
