#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < ((ll) n); i++)
#define sizeof(x) ((ll) x.size())

int main() {
    string s;
    cin >> s;

    ll c = -1, f = -1;
    rep(i, sizeof(s)) {
        if (c == -1 && s[i] == 'C') {
            c = i;
        }
        if (s[i] == 'F') {
            f = i;
        }
    }
    if (c != -1 && f != -1 && c < f) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}