#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    ll N;
    cin >> N;

    ll total = 0;
    ll add = 1;
    ll ans = 0;
    while (total < N) {
        total += add;
        add++;
        ans++;
    }
    cout << ans << endl;

    return 0;
}