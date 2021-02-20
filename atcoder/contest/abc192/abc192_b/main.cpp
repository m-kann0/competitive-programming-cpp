#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < (n); i++)

int main() {
    string S;
    cin >> S;

    bool result = true;
    rep(i, S.size()) {
        if (i % 2 == 0 && !('a' <= S[i] && S[i] <= 'z')) {
            result = false;
            break;
        }
        if (i % 2 == 1 && !('A' <= S[i] && S[i] <= 'Z')) {
            result = false;
            break;
        }
    }

    if (result) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}