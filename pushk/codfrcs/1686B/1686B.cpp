#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll T, n, nosub;
    int i, prev, curr;
    cin >> T;
    while(T--) {
        prev=0;
        curr=0;
        nosub=0;
        cin >> n;
        for (i=0; i<n; i++) {
            prev = curr;
            cin >> curr;
            if (curr < prev) {
                nosub++;
                curr=0;
            }
        }
        cout << nosub << endl;
    }
    return 0;
}