#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < ((ll) n); i++)
#define sizeof(x) ((ll) x.size())

int main() {
    ll A, B, C;
    cin >> A >> B >> C;

    ll p = A + B;
    ll m = A - B;

    if (C == p && C == m) {
        cout << "?" << endl;
    } else if (C == p) {
        cout << "+" << endl;
    } else if (C == m) {
        cout << "-" << endl;
    } else {
        cout << "!" << endl;
    }

    return 0;
}