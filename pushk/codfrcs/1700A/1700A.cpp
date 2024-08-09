#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; 
    long long n, m, x, y;
    cin >> t;
    while(t--) {
        cin >> n >> m;
        x,y = 0;
        x = ((m) * (m-1)) / 2;
        y = (m*n*(n+1))/2;

        cout << x+y << "\n";
    }
    return 0;
}