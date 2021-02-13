#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    int ans = min(N, 5) * B + (N - min(N, 5)) * A;

    cout << ans << endl;

    return 0;
}
