#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n, t;
    cin >> n >> t;
    int a[n];
    rep(i, n) cin >> a[i];

    int max_diff = 0;
    int count = 0;
    int mn = a[0];
    rep(i, n) {
        mn = min(mn, a[i]);
        int diff = a[i] - mn;
        if (diff > max_diff) {
            max_diff = diff;
            count = 1;
        } else if (diff == max_diff) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
