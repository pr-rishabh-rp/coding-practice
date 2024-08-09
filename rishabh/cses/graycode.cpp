// Gray code for n = 3: 000 001 011 111 110 100   010   101 

#include <iostream>
#include <string>
#include <vector>
#include <bitset>
#include <math.h>

using namespace std;

using ll = long long;

int main()
{
    ll n;
    cin >> n;

    vector<string> binary;
    vector<string> gray;

    for (int i = 0; i < pow(2,n); i++)
    {
        binary.push_back(bitset<16>(i).to_string()); // to binary
        cout << binary[i] << "\n";
    }
    
    for (int i = 0; i < binary.size(); i++)
    {
        
    }
    return 0;
}