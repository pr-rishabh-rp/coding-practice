#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    long long n, hf, sq;
    cin >> t;
    while(t--) {
        cin >> n;
        hf = 1;
        if (n%2==0) {
            cout << (n/2) << " "<< (n/2) << "\n";  
        }
        else {
            sq = sqrt(n);
            for (long long i = 2; i<=sq; i++) {
                if (n%i==0) {
                    hf = n/i;
                    break;
                }
                //that was stupid it is 3am i want die (TT-TT)
            }
            cout << hf << " " << (n-hf) << "\n";
        }
    }
}