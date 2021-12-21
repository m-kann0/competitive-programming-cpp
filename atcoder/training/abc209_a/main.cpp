#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    int A, B;
    cin >> A >> B;

    if (A <= B) {
        cout << (B - A + 1) << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}