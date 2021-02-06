#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int N, X;
    cin >> N >> X;
    bool first = true;
    rep(i, N) {
        int A;
        cin >> A;
        if (A != X) {
            if (!first) {
                cout << " ";
            }
            cout << A;
            first = false;
        }
    }
    cout << endl;

    return 0;
}
