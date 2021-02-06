#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    set<string> s;
    rep(i, n) {
        string si;
        cin >> si;
        s.insert(si);
    }

    for (auto si : s) {
        if (s.count("!" + si)) {
            cout << si << endl;
            return 0;
        }
    }

    cout << "satisfiable" << endl;

    return 0;
}
