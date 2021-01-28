#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    ll a, k;
    cin >> a >> k;

    ll want = 2000000000000;

    if (k == 0) {
        cout << (want - a) << endl;
        return 0;
    }

    int day = 0;
    ll now = a;
    while (now < want) {
        day++;
        now += 1 + now * k;
    }
    cout << day << endl;

    return 0;
}
