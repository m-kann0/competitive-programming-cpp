#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    double x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    double ans = abs((x1 - x3) * (y2 - y3) - (x2 - x3) * (y1 - y3)) / 2;
    printf("%.10f\n", ans);

    return 0;
}
