#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        int evenR = (r + 1) / 2;
        int evenL = l / 2;
        int evenCount = evenR - evenL;
        cout << evenCount / 2 << "\n";
    }
    return 0;
}
