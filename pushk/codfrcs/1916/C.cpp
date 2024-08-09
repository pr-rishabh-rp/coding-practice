//WIP

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t, n, i, b, y;
    bool um;
    vector<int> v;
    vector<vector<int>> ve;
    cin >> t;
    while(t--) {
        cin >> n;
        for (i=0; i<n; i++) {
            cin >> b;
            if (b%2==0) {
                ve[0].push_back(b);
                v.push_back(0);
            }
            else {
                ve[1].push_back(b);
                v.push_back(1);
            }
        }
        um = false;
        for (i=0; i<n; i++) {
            
        }
    }
    return 0;
}