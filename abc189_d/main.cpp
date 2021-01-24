#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<ll> dp(2, 1);
    rep(i, n) {
        string s;
        cin >> s;
        vector<ll> p(2);
        swap(dp, p);
        rep(j, 2) {
            rep(x, 2) {
                int nj = j;
                if (s == "AND") {
                    nj &= x;
                } else {
                    nj |= x;
                }
                dp[nj] += p[j];
            }
        }
    }
    cout << dp[1] << endl;

    return 0;
}
