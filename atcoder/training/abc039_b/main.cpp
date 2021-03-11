#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < ((ll) n); i++)
#define sizeof(x) ((ll) x.size())

int main() {
    ll X;
    cin >> X;

    for (ll n = 1; n * n * n * n <= X; n++) {
        if (n * n * n * n == X) {
            cout << n << endl;
            break;
        }
    }

    return 0;
}