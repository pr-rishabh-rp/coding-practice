#include <iostream>
#include <string>
#include <vector>

using namespace std;

using ll = long long;

int main()
{
    int t;
    cin >> t;
 
    int x = 0;

    string input;

    for (int i = 0; i < t; i++)
    {
        cin >> input;
        if (input == "X++" || input == "++X")
        {
            x++;
        }
        else if (input == "X--" || input == "--X")
        {
            x--;
        }
    }
    cout << x;
    
   return 0;
}