#include <iostream>
using namespace std;

int main() {
    int T, n, i, f=0;
    cin >> T;
    string sen;
    while(T--) {
        cin >> n;
        cin >> sen;
        f=0;
        for (i=0; i<n; i++) { 
            if (sen[i] == 'Q') {
                f++;
            }
            else {
                f--;
                if (f<0) {
                    f=0;
                }
            }
        }
        if (f>0) {
            cout << "No" << endl;
        }
        else {
            cout << "Yes" << endl;
        }
    }
    return 0;
}