#include <bits/stdc++.h>
using namespace std;

int main() {
    int T, n, i, max0, max1, tem0, tem1, flaf, c0, c1;
    string s;
    cin >> T;
    while (T--) {
        cin >> n;
        cin >> s;
        max0 = 0;
        max1 = 0;
        tem0 = 0;
        tem1 = 0;
        c0 = 0;
        c1 = 0;
        if (s[0] == '0') {
            flaf = 1;
        }
        else {
            flaf = 0;
        }
        for (i=0; i<n; i++) {
            if (s[i] == '0') {
                c0++;
                if (flaf==0) {
                    tem0++;
                }
                else {
                    flaf = 0;
                    if (tem1 > max1) {
                        max1 = tem1;
                        tem1 = 0;
                    }
                    tem0 = 1;
                }
            }
            else {
                c1++;
                if (flaf==1) {
                    tem1++;
                }
                else {
                    flaf = 1;
                    if (tem0 > max0) {
                        max0 = tem0;
                        tem0 = 0;
                    }
                    tem1 = 1;
                }
            }
        }
        if (tem1 > max1) {
            max1 = tem1;
            tem1 = 0;
        }
        if (tem0 > max0) {
            max0 = tem0;
            tem0 = 1;
        }
        //std::cout << max0 << " " << max1 << endl;
        
        if ((max0 * max0) > (max1 * max1) && (max0 * max0) > (c0 * c1)) {
            std::cout << (max0 * max0) << endl;
        }
        else if ((max1 * max1) > (max0 * max0) && (max1 * max1) > (c0 * c1)) {
            std::cout << (max1 * max1) << endl;
        }
        else if ((c0 * c1) > (max0 * max0) && ((c0 * c1) > (max1 * max1))) {
            std::cout << (c0 * c1) << endl;
        }
        else {
            std::cout << (max0 * max1) << endl;
        }
        
    }
    return 0;
}