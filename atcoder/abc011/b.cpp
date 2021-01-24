#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    string s;
    cin >> s;

    rep(i, s.length()) {
        if (i == 0) {
            cout << (char) toupper(s[i]);
        } else {
            cout << (char) tolower(s[i]);
        }
    }
    cout << endl;

    return 0;
}
