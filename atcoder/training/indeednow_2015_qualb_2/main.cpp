#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    string s, t;
    cin >> s >> t;

    if (s.size() != t.size()) {
        cout << -1 << endl;
        return 0;
    }

    rep(i, s.size()) {
        bool same = true;
        rep(j, s.size()) {
            if (s[j] != t[j]) {
                same = false;
                break;
            }
        }
        if (same) {
            cout << i << endl;
            return 0;
        }
        s.insert(s.begin(), s.back());
        s.pop_back();
    }

    cout << -1 << endl;
    return 0;
}
