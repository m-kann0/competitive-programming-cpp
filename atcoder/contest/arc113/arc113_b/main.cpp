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

    vector<bool> used(10, false);
    vector<ll> mods1;
    ll m = A % 10;
    while (true) {
        if (!used[m]) {
            used[m] = true;
            mods1.push_back(m);
            m = (m * (A % 10)) % 10;
        } else {
            break;
        }
    }

    for (auto v : mods1) {
        printf("%lld ", v);
    }
    printf("\n");

    ll s1 = sizeof(mods1);
    if (s1 == 1) {
        cout << mods1[0] << endl;
        return 0;
    }

    vector<ll> mods2;
    vector<bool> used2(s1, false);
    m = B % s1;
    ll tail;
    while (true) {
        if (used2[m]) {
            rep(i, sizeof(mods2)) {
                if (mods2[i] == m) {
                    tail = i;
                    break;
                }
            }
            break;
        } else {
            used2[m] = true;
            mods2.push_back(m);
            m = (m * B) % s1;
        }
    }

    for (auto v : mods2) {
        printf("%lld ", v);
    }
    printf("\n");

    printf("tail=%lld\n", tail);

    cout << mods1[(mods2[(C + sizeof(mods2) - 1) % (sizeof(mods2) - tail)] + sizeof(mods1) - 1) % sizeof(mods1)] << endl;

    return 0;
}