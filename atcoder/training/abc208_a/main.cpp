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

    if ((A <= B) && (B <= (A * 6))) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}