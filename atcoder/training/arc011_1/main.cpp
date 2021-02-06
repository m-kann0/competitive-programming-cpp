#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int m, n, N;
    cin >> m >> n >> N;

    int ans = N;
    pair<int, int> prev = make_pair(N, 0);
    while ((prev.first + prev.second) / m > 0) {
        pair<int, int> current = make_pair(
                ((prev.first + prev.second) / m) * n,
                (prev.first + prev.second) % m);
        ans += current.first;
        prev = current;
    }

    cout << ans << endl;

    return 0;
}
