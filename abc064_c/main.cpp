#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    int a[n];
    rep(i, n) cin >> a[i];

    vector<bool> exist(8, false);
    int over3200 = 0;
    rep(i, n) {
        if (a[i] / 400 < 8) {
            exist[a[i] / 400] = true;
        } else {
            over3200++;
        }
    }

    int mn = 0;
    rep(i, 8) {
        if (exist[i]) {
            mn += 1;
        }
    }

    int mx = mn + over3200;
    if (mn == 0) {
        mn = 1;
    }

    cout << mn << " " << mx << endl;

    return 0;
}
