#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < ((ll) n); i++)
#define sizeof(x) ((ll) x.size())

int main() {
    vector<int> a(3);
    rep(i, 3) cin >> a[i];

    sort(a.begin(), a.end());

    cout << a[1] << endl;

    return 0;
}