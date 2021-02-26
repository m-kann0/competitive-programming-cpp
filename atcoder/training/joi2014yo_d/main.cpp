#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < (n); i++)

int main() {
    ll N;
    cin >> N;
    string s;
    cin >> s;

    vector<ll> t(N);
    rep(i, N) {
        if (s[i] == 'J') {
            t[i] = 0;
        } else if (s[i] == 'O') {
            t[i] = 1;
        } else if (s[i] == 'I') {
            t[i] = 2;
        } else {
            assert(false);
        }
    }

    const ll MOD = 10007;
    vector<vector<ll>> dp(N + 1, vector<ll>(8, 0));
    dp[0][1] = 1;
    rep(i, N) {
        rep(S, 8) {
            if ((S & (1 << t[i])) == 0) {
                continue;
            }
            rep(T, 8) {
                if ((S & T) == 0) {
                    continue;
                }
                dp[i + 1][S] += dp[i][T];
                dp[i + 1][S] %= MOD;
            }
        }
    }

    ll ans = 0;
    rep(S, 8) {
        ans += dp[N][S];
        ans %= MOD;
    }
    cout << ans << endl;

    return 0;
}