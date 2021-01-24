#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    double r, d;
    cin >> r >> d;

    double ans = r * r * M_PI * d * 2 * M_PI;
    printf("%lf\n", ans);

    return 0;
}
