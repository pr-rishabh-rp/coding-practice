#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, j;
    bool x;
    string s;
    cin >> t;
    while (t--) {
        cin >> n;
        cin >> s;
        x = true;
        if ((n-1)%3==1) {
            cout << "NO\n";
        }
        else {
            if ((n-1)%3==2) {
                n++;
            }
            for (int i=3; i<n; i+=3) {
                if (s[i-1]!=s[i-2]) {
                    x = false;
                    break;
                }
            }
            if (x) {
                cout << "YES\n";
            }
            else {
                cout << "NO\n";
            }
        }
    }
    return 0;
}