#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    int s[n];
    rep(i, n) cin >> s[i];

    int total = 0;
    int mn = 1000;
    rep(i, n) {
        total += s[i];
        if (s[i] < mn && s[i] % 10 != 0) {
            mn = s[i];
        }
    }

    if (total % 10 == 0) {
        total -= mn;
    }

    if (total % 10 == 0) {
        cout << "0" << endl;
    } else {
        cout << total << endl;
    }

    return 0;
}
