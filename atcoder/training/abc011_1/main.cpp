#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < ((ll) n); i++)
#define sizeof(x) ((ll) x.size())

int main() {
    int N;
    cin >> N;

    if (N == 12) {
        N = 1;
    } else {
        N++;
    }

    cout << N << endl;

    return 0;
}