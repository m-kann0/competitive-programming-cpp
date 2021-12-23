#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    set<string> s;
    rep(i, 4) {
        string S;
        cin >> S;
        s.insert(S);
    }

    if (s.size() == 4) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}