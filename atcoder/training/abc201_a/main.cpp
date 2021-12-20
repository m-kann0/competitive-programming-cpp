#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < ((ll) n); i++)
#define sizeof(x) ((ll) x.size())

int main() {
    vector<int> A(3);
    rep (i, 3) {
        cin >> A[i];
    }
    sort(A.begin(), A.end());

    if ((A[2] - A[1]) == (A[1] - A[0])) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}