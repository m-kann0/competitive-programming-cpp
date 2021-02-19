#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < (n); i++)

template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

int main() {
    ll N, M;
    cin >> N >> M;
    ll A[N];
    rep(i, N) {
        cin >> A[i];
        A[i]--;
    }

    vector<ll> count(M, 0);
    rep(i, N) {
        count[A[i]]++;
    }
    vector<vector<ll>> sum(M, vector<ll>(N + 1, 0));
    rep(i, M) {
        rep(j, N) {
            sum[i][j + 1] = sum[i][j];
            if (A[j] == i) {
                sum[i][j + 1]++;
            }
        }
    }

    // rep(i, M) {
    //     printf("%lld: %lld\n", i, count[i]);
    // }
    // rep(i, M) {
    //     printf("%lld: ", i);
    //     rep(j, N + 1) {
    //         printf("%lld ", sum[i][j]);
    //     }
    //     printf("\n");
    // }

    const ll INF = 1'000'000'000'000'000'000;
    vector<ll> dp(1 << M, INF);
    dp[0] = 0;
    for (ll S = 0; S < (1 << M); S++) {
        ll left = 0;
        rep(i, M) {
            if ((S & (1 << i)) > 0) {
                left += count[i];
            }
        }
        rep(i, M) {
            if ((S & (1 << i)) > 0) {
                continue;
            }
            ll right = left + count[i];
            chmin(dp[S | (1 << i)], dp[S] + count[i] - (sum[i][right] - sum[i][left]));
        }
    }

    cout << dp[(1 << M) - 1] << endl;

    return 0;
}