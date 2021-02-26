#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); i++)

template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

int main() {
    vector<ll> A, B;
    ll i = 1;
    while (true) {
        ll X = i * (i + 1) * (i + 2) / 6;
        if (X > 1'000'000) {
            break;
        }
        A.push_back(X);
        if (X % 2 == 1) {
            B.push_back(X);
        }
        i++;
    }

    vector<ll> dp_a(1'000'005), dp_b(1'000'005);

    auto f = [](vector<ll> & v, vector<ll> & dp) {
        const ll N = 1'000'000;
        for (ll i = 0; i <= N; i++) {
            dp[i] = i;
        }
        for (size_t i = 1; i < v.size(); i++) {
            rep(j, N + 1) {
                if (j - v[i] >= 0) {
                    chmin(dp[j], dp[j - v[i]] + 1);
                }
            }
        }
    };

    f(A, dp_a);
    f(B, dp_b);

    while (true) {
        ll N;
        cin >> N;

        if (N == 0) {
            break;
        }

        cout << dp_a[N] << " " << dp_b[N] << endl;
    }

    return 0;
}