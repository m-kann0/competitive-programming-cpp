#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

string solve(string s) {
    rep(i, s.size()) {
        rep(j, s.size()) {
            if (i == j) {
                continue;
            }
            if (s[i] != s[j]) {
                swap(s[i], s[j]);
                return s;
            }
        }
    }
    // all same character
    if (s[0] == 'a') {
        if (s.size() == 1) {
            return "NO";
        }
        string t = "";
        rep(i, s.size() - 2) {
            t.push_back('a');
        }
        t.push_back('b');
        return t;
    }
    if (s[0] == 'z') {
        if (s.size() == 20) {
            return "NO";
        }
        s[s.size() - 1] = 'y';
        s.push_back('a');
        return s;
    }
    if (s.size() == 1) {
        s[0] = 'a' + (s[0] - 'a' - 1);
        s.push_back('a');
        return s;
    }
    s[0] = 'a' + (s[0] - 'a' - 1);
    s[1] = 'a' + (s[1] - 'a' + 1);
    return s;
}

int main() {
    string s;
    cin >> s;

    cout << solve(s) << endl;

    return 0;
}
