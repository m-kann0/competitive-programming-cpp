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

    int ans = 0;
    ans += 7 - a;
    ans += 7 - b;
    ans += 7 - c;
    cout << ans << endl;

    return 0;
}