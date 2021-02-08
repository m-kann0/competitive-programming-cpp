#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int N;
    cin >> N;

    int ans = N * (N + 1) / 2 * 10000;
    ans /= (double) N;

    cout << ans << endl;

    return 0;
}
