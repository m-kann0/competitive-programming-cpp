#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    string s;
    cin >> s;

    for (int i = s.length() - 2; i > 0; i -= 2) {
        bool is_ok = true;
        rep (j, i / 2) {
            if (s[j] != s[i / 2 + j]) {
                is_ok = false;
            }
        }
        if (is_ok) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}
