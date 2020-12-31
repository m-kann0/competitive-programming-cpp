#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int s = a + b + c;
    int t = max(a, max(b, c)) * 3;

    int ans = (t - s) / 2;
    if ((t - s) % 2 != 0) {
        ans += 2;
    }

    cout << ans << endl;

    return 0;
}
