#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    string s;
    cin >> s;

    rep(i, s.length()) {
        if (s[i] == 'O') {
            s.replace(i, 1, "0");
        } else if (s[i] == 'D') {
            s.replace(i, 1, "0");
        } else if (s[i] == 'I') {
            s.replace(i, 1, "1");
        } else if (s[i] == 'Z') {
            s.replace(i, 1, "2");
        } else if (s[i] == 'S') {
            s.replace(i, 1, "5");
        } else if (s[i] == 'B') {
            s.replace(i, 1, "8");
        }
    }

    cout << s << endl;

    return 0;
}
