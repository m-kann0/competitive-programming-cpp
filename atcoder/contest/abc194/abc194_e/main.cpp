#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < ((ll) n); i++)
#define sizeof(x) ((ll) x.size())

int main() {
    int N, M;
    cin >> N >> M;
    int A[N];
    rep(i, N) cin >> A[i];

    map<int, int> mp;
    rep(i, M) {
        mp[A[i]]++;
    }

    int mex = N;
    rep(i, N) {
        if (mp[i] == 0) {
            mex = i;
            break;
        }
    }

    rep(i, N - M) {
        mp[A[M + i]]++;
        mp[A[i]]--;
        if (A[i] < mex && mp[A[i]] == 0) {
            mex = A[i];
        }
    }
    cout << mex << endl;

    return 0;
}