#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n;
    string r;
    cin >> n >> r;

    int total = 0;
    rep(i, n) {
        if (r[i] != 'F') {
            total += 4 - (r[i] - 'A');
        }
    }

    double ans = total / (double) n;
    printf("%.10f\n", ans);

    return 0;
}
