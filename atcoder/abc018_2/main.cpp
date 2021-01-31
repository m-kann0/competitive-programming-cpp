#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    string s;
    cin >> s;
    int n;
    cin >> n;
    rep(i, n) {
        int l, r;
        cin >> l >> r;
        l--;
        string t = s;
        for (int j = 0; j < (r - l); j++) {
            t[l + j] = s[r - j - 1];
        }
        s = t;
    }
    cout << s << endl;

    return 0;
}
