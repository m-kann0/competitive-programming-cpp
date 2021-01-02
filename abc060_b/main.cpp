#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    vector<bool> used(b, false);
    int x = a % b;
    while (!used[x]) {
        if (x == c) {
            cout << "YES" << endl;
            return 0;
        }
        used[x] = true;
        x += a;
        x %= b;
    }

    cout << "NO" << endl;

    return 0;
}
