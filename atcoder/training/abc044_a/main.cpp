#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int N, K, X, Y;
    cin >> N >> K >> X >> Y;

    if (N <= K) {
        cout << N * X << endl;
    } else {
        cout << K * X + (N - K) * Y << endl;
    }

    return 0;
}