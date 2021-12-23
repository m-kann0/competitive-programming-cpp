#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    int N, K;
    cin >> N >> K;

    int ans = 0;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= K; j++) {
            ans += i * 100 + j;
        }
    }
    cout << ans << endl;

    return 0;
}