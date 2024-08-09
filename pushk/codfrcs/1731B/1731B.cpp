#include <bits/stdc++.h>
using namespace std;

int main() {
    long long T, n, sum, md;
    md = 1e9+7LL;
    cin >> T;
    while (T--) {
        cin >> n;
        sum = ((((n%md)*((n+1)%md)%md)*((4*n-1)%md)%md)*(337%md))%md;
        cout << sum << "\n";
    }
    return 0;
}