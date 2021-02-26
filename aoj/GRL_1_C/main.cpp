#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < ((ll) n); i++)
#define sizeof(x) ((ll) x.size())

const ll INF = 1'000'000'000'000'000'000;

int main() {
    ll V, E;
    cin >> V >> E;
    vector<vector<ll>> d(V, vector<ll>(V, INF));
    rep(i, V) d[i][i] = 0;
    rep(i, E) {
        ll s, t, di;
        cin >> s >> t >> di;
        d[s][t] = min(d[s][t], di);
    }

    rep(k, V) {
        rep(i, V) {
            rep(j, V) {
                if (d[i][k] < INF && d[k][j] < INF) {
                    d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
                }
            }
        }
    }

    bool negative = false;
    rep(i, V) {
        if (d[i][i] < 0) {
            negative = true;
        }
    }

    if (negative) {
        cout << "NEGATIVE CYCLE" << endl;
    } else {
        rep(i, V) {
            rep(j, V) {
                if (j > 0) {
                    cout << " ";
                }
                if (d[i][j] >= INF) {
                    cout << "INF";
                } else {
                    cout << d[i][j];
                }
            }
            cout << endl;
        }
    }

    return 0;
}