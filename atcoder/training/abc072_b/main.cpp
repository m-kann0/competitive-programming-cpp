#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); i++)

int main() {
    string s;
    cin >> s;
    rep(i, s.size()) {
        if (i % 2 == 0) {
            cout << s[i];
        }
    }
    cout << endl;

    return 0;
}