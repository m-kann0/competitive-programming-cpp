#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    ll B, C;
    cin >> B >> C;
    set<ll> s;
    while (C >= 0) {
        s.insert(B);
        if (C > 0) {
            s.insert(-B);
        }
        C-= 2;
        B--;
    }
    cout << s.size() << endl;

    return 0;
}