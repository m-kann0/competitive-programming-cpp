#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (int i = 0; i < ((int) n); i++)
#define sizeof(x) ((ll) x.size())

struct order { int x, y, r, id; };

int main() {
    int n;
    cin >> n;
    vector<order> orders;
    rep(i, n) {
        int xi, yi, ri;
        cin >> xi >> yi >> ri;
        orders.push_back(order{xi, yi, ri, i});
    }

    rep(i, n) {
        order o = orders[i];
        printf("%d %d %d %d\n", o.x, o.y, o.x + 1, o.y + 1);
    }

    return 0;
}