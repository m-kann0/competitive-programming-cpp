#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < ((ll) n); i++)
#define sizeof(x) ((ll) x.size())

int main() {
    ll A;
    cin >> A;

    ll i = 1;
    while (i * i * i <= A) {
        if (i * i * i == A) {
            cout << "YES" << endl;
            return 0;
        }
        i++;
    }
    cout << "NO" << endl;
    return 0;
}