#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    string s;
    cin >> s;

    bool ok = true;
    rep(i, s.length() / 2) {
        if (s[i] != '*' && s[s.length() - i - 1] != '*' && s[i] != s[s.length() - i - 1]) {
            ok = false;
            break;
        }
    }

    if (ok) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
