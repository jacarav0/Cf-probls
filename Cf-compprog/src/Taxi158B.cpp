#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s, count[5] = {0};
    cin >> n;
    while (n--) {
        cin >> s;
        count[s]++;
    int total = count[4];
    total += count[3];
    count[1] = max(0, count[1] - count[3]);
    total += count[2] / 2;
    if (count[2] % 2) {
        total += 1;
        count[1] = max(0, count[1] - 2);
    }
    total += (count[1] + 3) / 4;
    cout << total << endl;
    return 0;
}
