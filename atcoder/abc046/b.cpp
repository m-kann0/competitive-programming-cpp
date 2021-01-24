#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n, k;
    cin >> n >> k;

    ll ans = k;
    rep(i, n - 1) {
        ans *= k - 1;
    }
    cout << ans << endl;
}
