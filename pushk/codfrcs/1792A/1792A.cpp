#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, n, oc, tc, tmp;
    cin >> t;
    while (t--) {
        cin >> n;
        oc = 0;
        tc = 0;
        for (int i = 0; i<n; i++) {
            cin >> tmp;
            if (tmp == 1) {
                oc++;
            }
            else {
                tc++;
            }
        }
        if (oc%2!=0) tc++;
        cout << ((oc/2) + tc) << "\n";
    }
    return 0;
}