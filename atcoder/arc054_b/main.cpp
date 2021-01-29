#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

double f(double x, double P) {
    return x + P / pow(2.0, x / 1.5);
}

int main() {
    double P;
    cin >> P;

    double low = 0.0;
    double high = P;
    while (abs(high - low) > 0.0000000001) {
        double c1 = (low * 2 + high) / 3;
        double c2 = (low + high * 2) / 3;
        if (f(c1, P) > f(c2, P)) {
            low = c1;
        } else {
            high = c2;
        }
    }

    printf("%.10f\n", f(low, P));

    return 0;
}
