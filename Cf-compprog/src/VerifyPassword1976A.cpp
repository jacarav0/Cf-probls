#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        string sorted_s = s;
        sort(sorted_s.begin(), sorted_s.end());

        if (s == sorted_s) {
            cout << "yes\n";
        } else {
            cout << "no\n";
        }
    }

    return 0;
}
