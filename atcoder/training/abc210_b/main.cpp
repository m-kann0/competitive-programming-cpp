#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;

    bool t = false;
    rep(i, N) {
        if (S[i] == '1') {
            t = (i % 2 == 0);
            break;
        }
    }

    if (t) {
        cout << "Takahashi" << endl;
    } else {
        cout << "Aoki" << endl;
    }

    return 0;
}