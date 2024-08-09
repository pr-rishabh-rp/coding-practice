#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, l, h;
    cin >> t;
    while (t--) {
        cin >> n;
        l = 2;
        h = 2*n;
        for (int i = 1; i<= n; i++) {
            if (i%2 != 0) {
                cout << h << " ";
                h-=2;
            }
            else {
                cout << l << " ";
                l+=2;
            }
        }
        l = 1;
        h = n+1;
        cout << "\n";
        for (int i = 1; i<= n; i++) {
            if (i%2 == 0) {
                cout << h << " ";
                h+=2;
            }
            else {
                cout << l << " ";
                l+=2;
            }
        }
        cout << "\n";
    }
    return 0;
}s