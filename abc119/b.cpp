#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

#define INF 1000000000000000

int binary_search(vector<ll>& v, ll x) {
    int ok = 0;
    int ng = v.size();
    while (abs(ok - ng) > 1) {
        int mid = (ok + ng) / 2;
        if (v[mid] < x) {
            ok = mid;
        } else {
            ng = mid;
        }
    }
    return ok;
}

int main() {
    int a, b, q;
    cin >> a >> b >> q;
    vector<ll> s;
    s.push_back(-INF);
    rep(i, a) {
        ll si;
        cin >> si;
        s.push_back(si);
    }
    s.push_back(INF);
    vector<ll> t;
    t.push_back(-INF);
    rep(i, b) {
        ll ti;
        cin >> ti;
        t.push_back(ti);
    }
    t.push_back(INF);

    rep(_, q) {
        ll x;
        cin >> x;

        int i = binary_search(s, x);
        int j = binary_search(t, x);

        // left left
        ll ans = max(x - s[i], x - t[j]);
        // left right
        ans = min(ans, x - s[i] + t[j + 1] - x + min(x - s[i], t[j + 1] - x));
        // right left
        ans = min(ans, s[i + 1] - x + x - t[j] + min(s[i + 1] - x, x - t[j]));
        // right right
        ans = min(ans, max(s[i + 1] - x, t[j + 1] - x));

        cout << ans << endl;
    }

    return 0;
}
