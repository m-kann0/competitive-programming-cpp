#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < (n); i++)

int main() {
    int group[13] = {0, 1, 3, 1, 2, 1, 2, 1, 1, 2, 1, 2, 1};
    int x, y;
    cin >> x >> y;

    if (group[x] == group[y]) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}