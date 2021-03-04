#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < ((ll) n); i++)
#define sizeof(x) ((ll) x.size())

int main() {
    ll W, a, b;
    cin >> W >> a >> b;

    if (a > b) {
        swap(a, b);
    }

    if (a + W < b) {
        cout << (b - (a + W)) << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}