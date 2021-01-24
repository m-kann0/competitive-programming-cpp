#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int digit_sum(int x) {
    int s = 0;
    while (x > 0) {
        s += x % 10;
        x /= 10;
    }
    return s;
}

int main() {
    int n;
    cin >> n;

    int ans = 100000;
    for (int a = 1; a < n; a++) {
        int b = n - a;
        ans = min(ans, digit_sum(a) + digit_sum(b));
    }

    cout << ans << endl;

    return 0;
}
