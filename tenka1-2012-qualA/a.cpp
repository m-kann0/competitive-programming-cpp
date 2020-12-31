#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;

    int count = 0;
    int pre1 = 0;
    int pre2 = 1;
    rep(i, n) {
        count += pre1;
        pre1 = pre2;
        pre2 = count;
    }
    cout << (count + pre1 + pre2) << endl;

    return 0;
}
