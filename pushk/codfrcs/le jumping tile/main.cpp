#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    bool flip;
    long int T, l, i, f, j;
    int in, in2, tem;
    string sen;
    vector<int> vec;
    vector<int> indices;
    cin >> T;
    while(T--) {
        vec.clear();
        indices.clear();
        flip = false;
        cin >> sen;
        l = sen.length();
        in = sen[0] - 96;
        in2 = sen[l-1] - 96;
        cout << abs(in - in2) << " ";
        if (in2 < in){
            tem = in;
            in = in2;
            in2 = tem;
            flip = true;
        }
        for (i=1; i<l-1; i++) {
            if ((sen[i]-96) < in || (sen[i]-96) > in2){
                continue;
            }
            else {
                vec.push_back((int)(sen[i]-96));
                indices.push_back(i);
            }
        }
        f=vec.size();
        cout << f+2 << endl << "1 ";
        sort(vec.begin(),vec.end());
        j=f;
        while (f--) {
            for (auto& c: indices) {
                if (flip) {
                    if (sen[c]-96 == vec[f]) {
                        sen[c] = '$';
                        cout << c+1 << " ";
                    }
                    continue;
                }
                if (sen[c]-96 == vec[j-f-1]) {
                    sen[c] = '$';
                    cout << c+1 << " ";
                }
            }
            vec.pop_back();
        }
        cout << l << endl;
    }
    return 0;
}