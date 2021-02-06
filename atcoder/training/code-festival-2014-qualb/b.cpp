#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    int total = 0;
    rep (i, n) {
        total += a[i];
        if (total >= k) {
            cout << i + 1 << endl;
            break;
        }
    }

    return 0;
}
