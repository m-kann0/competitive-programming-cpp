#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < ((ll) n); i++)
#define sizeof(x) ((ll) x.size())

int main() {
    ll A, B, W;
    cin >> A >> B >> W;

    W *= 1000;

    if (W % A != 0 && W % B != 0 && W / A == W / B) {
        cout << "UNSATISFIABLE" << endl;
        return 0;
    }

    if (A == B) {
        printf("%lld %lld\n", W / A, W / A);
        return 0;
    }

    ll mx = W / A;
    if (((W % A) / (B - A)) > mx) {
        mx += 1;
    }
    ll mn = W / B;
    if (W % B != 0) {
        mn += 1;
    }

    printf("%lld %lld\n", mn, mx);

    return 0;
}