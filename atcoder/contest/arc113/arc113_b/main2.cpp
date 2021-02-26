#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < ((ll) n); i++)
#define sizeof(x) ((ll) x.size())

int main() {
    ll A, B, C;
    cin >> A >> B >> C;

    auto debug = [](vector<ll> & vec) {
        for (auto v : vec) {
            printf("%lld ", v);
        }
        printf("\n");
    };

    vector<ll> v1;
    v1.push_back(A % 10);
    while (true) {
        ll next = (v1.back() * (A % 10)) % 10;
        bool contains = false;
        for (auto v : v1) {
            if (v == next) {
                contains = true;
            }
        }
        if (contains) {
            break;
        }
        v1.push_back(next);
    }
    v1.insert(v1.begin(), v1.back());
    v1.erase(v1.end() - 1);

    // debug(v1);

    vector<ll> v2;
    v2.push_back(B % sizeof(v1));
    vector<ll> tails;
    while (true) {
        ll next = (v2.back() * B) % sizeof(v1);
        ll index = -1;
        rep(i, sizeof(v2)) {
            if (v2[i] == next) {
                index = i;
                break;
            }
        }
        if (index == -1) {
            v2.push_back(next);
        } else {
            rep(i, index) {
                tails.push_back(v2[0]);
                v2.erase(v2.begin());
            }
            break;
        }
    }
    v2.insert(v2.begin(), v2.back());
    v2.erase(v2.end() - 1);

    // debug(tails);
    // debug(v2);

    ll x;
    if (C <= sizeof(tails)) {
        x = tails[C - 1];
    } else {
        x = v2[(C - sizeof(tails)) % sizeof(v2)];
    }
    // printf("x=%lld\n", x);

    ll ans = v1[x];
    cout << ans << endl;

    return 0;
}