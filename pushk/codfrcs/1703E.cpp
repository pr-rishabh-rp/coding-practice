#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, i, j, r90, r180, r270, count, opt;
    vector<string> v;
    string m;
    cin >> t;
    while (t--) {
        cin >> n;
        v.clear();
        for (int i=0; i<n; i++) {
            cin >> m;
            v.push_back(m);
        }
        
        count = 0;
        opt = 0;
        for (int i=0; i<(n+1)/2; i++) {
            for (int j=i; j<n-i-1; j++) {
                r90 = v[n-1-j][i];
                r180 = v[n-1-i][n-1-j];
                r270 = v[j][n-1-i];
                if (int(v[i][j]) != r90) {
                    opt++;
                }
                if (int(v[i][j]) != r180) {
                    opt++;
                }
                if (int(v[i][j]) != r270) {
                    opt++;
                }
                count += (opt > 2 ? (4 - opt) : (opt));
                opt = 0;
            }
        }
        cout << count << "\n";
    }
    return 0;
}