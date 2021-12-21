#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    int N;
    cin >> N;
    vector<pair<int, string>> v(N);
    rep(i, N) {
        cin >> v[i].second >> v[i].first;
    }

    //sort(v.rbegin(), v.rend());
    sort(v.begin(), v.end(), greater<>{});

    cout << v[1].second << endl;

    return 0;
}