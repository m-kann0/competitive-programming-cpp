#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n;
    int a, b;
    cin >> n >> a >> b;
    int p[n];
    rep(i, n) cin >> p[i];

    int c1 = 0, c2 = 0, c3 = 0;
    rep(i, n) {
        if (p[i] <= a) {
            c1++;
        } else if (p[i] <= b) {
            c2++;
        } else {
            c3++;
        }
    }

    cout << min(c1, min(c2, c3)) << endl;

    return 0;
}
