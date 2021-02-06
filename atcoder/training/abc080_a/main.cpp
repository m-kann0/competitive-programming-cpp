#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    cout << min(n * a, b) << endl;
    return 0;
}
