#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < ((ll) n); i++)
#define sizeof(x) ((ll) x.size())

int main() {
    ll x, y;
    cin >> x >> y;

    if (x < y) {
        cout << "Better" << endl;
    } else {
        cout << "Worse" << endl;
    }

    return 0;
}