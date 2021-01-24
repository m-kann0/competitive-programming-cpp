#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;

    double total = 0;
    rep(i, n) {
        double x;
        string u;
        cin >> x >> u;
        if (u == "JPY") {
            total += x;
        } else {
            total += x * 380000.0;
        }
    }

    printf("%f\n", total);

    return 0;
}
