#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    string S;
    cin >> S;

    // for (int i = S.size() - 1; i >= 0; i--) {
    //     char c = S[i];
    //     switch (c) {
    //         case '6': cout << '9'; break;
    //         case '9': cout << '6'; break;
    //         default: cout << c; break;
    //     }
    // }
    // cout << endl;

    reverse(S.begin(), S.end());
    rep(i, S.size()) {
        if (S[i] == '6') {
            S[i] = '9';
        } else if (S[i] == '9') {
            S[i] = '6';
        }
    }
    cout << S << endl;

    return 0;
}