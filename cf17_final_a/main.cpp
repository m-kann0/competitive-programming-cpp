#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    string s;
    cin >> s;

    s = ' ' + s + ' ';

    rep(i, s.size()) {
        if (s[i] == 'K' && s[i - 1] != 'A') {
            s.insert(i, 1, 'A');
        }
    }
    rep(i, s.size()) {
        if (s[i] == 'H' && s[i + 1] != 'A') {
            s.insert(i + 1, "A");
        }
    }
    rep(i, s.size()) {
        if (s[i] == 'B' && s[i + 1] != 'A') {
            s.insert(i + 1, "A");
        }
    }
    rep(i, s.size()) {
        if (s[i] == 'R' && s[i + 1] != 'A') {
            s.insert(i + 1, "A");
        }
    }

    s = s.substr(1, s.size() - 2);

    if (s == "AKIHABARA") {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
