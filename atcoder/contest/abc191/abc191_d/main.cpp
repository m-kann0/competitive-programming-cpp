#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    double X, Y, R;
    cin >> X >> Y >> R;

    int low = ceil(X - R);
    int high = floor(X + R);

    ll ans = 0;
    for (int i = low; i <= high; i++) {
        double p = sqrt(pow(R, 2) - pow((X - (double) i), 2));
        int y_low = ceil(Y - p);
        int y_high = floor(Y + p);
        ans += y_high - y_low + 1;
    }
    cout << ans << endl;

    return 0;
}
