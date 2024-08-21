#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, i, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        if (n % k != 0) {
            cout << 1 << "\n";
            cout << n << "\n";
        }
        else {
            cout << 2 << "\n";
            for (int i=n-1; i>=n/2; i--) {
                if (i%k!=0 && (n-i)%k!=0) {
                    cout << i << " " << (n-i) << "\n";
                    break;
                }
            }
        }
        
    }
    return 0;
}