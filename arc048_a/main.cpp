#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int a, b;
    cin >> a >> b;

    int ans = b - a;
    if (a < 0 && b > 0) {
        ans -= 1;
    }

    cout << ans << endl;

    return 0;
}
