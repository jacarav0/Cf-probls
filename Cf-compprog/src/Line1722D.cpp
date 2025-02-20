#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;
    while (t--) {
        int n;
        string input;
        cin >> n >> input;

        vector<int> diffs(n, 0);
        long long sum = 0;

        for (int i = 0; i < n; i++) {
            int cur = (input[i] == 'L') ? i : (n - i - 1);
            int mx = max(i, n - i - 1);
            sum += cur;
            diffs[i] = mx - cur;
        }
        sort(diffs.rbegin(), diffs.rend());
        for (int i = 0; i < n; i++) {
            sum += diffs[i];
            cout << sum << " ";
        }
        cout << "\n";
    }
    return 0;
}
