#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < ((ll) n); i++)
#define sizeof(x) ((ll) x.size())

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a == b) {
        cout << c << endl;
    } else if (b == c) {
        cout << a << endl;
    } else if (c == a) {
        cout << b << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}