#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    string sen;
    bool flag = false;
    cin >> t;
    while (t--) {
        cin >> n;
        cin >> sen;
        flag = false;
        for (int i=0; i<n-2; i++) {
            for (int j=i+2; j<n-1; j++) {
                if (i!=j && (j!=(i+1)) && sen[i] == sen[j] && sen[i+1] == sen[j+1]) {
                    flag = true;
                    break;
                }
            }
        }
        if (flag) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}