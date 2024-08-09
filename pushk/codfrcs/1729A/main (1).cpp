#include <iostream>
using namespace std; 

int main() {
    long int T, a, b, c,p;
    cin >> T;
    while(T--) {
        cin >> a >> b >> c;
        p = abs(b-c);
        if ((a-1) > (p+c-1)) {
            cout << "2" << endl;
        }
        else if ((a-1) < (p+c-1)) {
            cout << "1" << endl;
        }
        else {
            cout << "3" << endl;
        }
    }
    return 0;
}