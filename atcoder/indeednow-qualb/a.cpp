#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int ans = abs(x1 - x2) + abs(y1 - y2) + 1;
    cout << ans << endl;

    return 0;
}
