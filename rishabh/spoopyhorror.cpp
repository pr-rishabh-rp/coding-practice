#include <iostream>
#include <string>

using namespace std;

int main()
{
    string kurwa;
    cout << "Enter the game language:\t";
    getline(cin, kurwa);

    for (int i = 0; i < kurwa.length(); i++) {
        if (kurwa[i] == ' ')
        {
            continue;
        }
        if (kurwa[i] % 2 == 0)
        {
            kurwa[i] = kurwa[i] - 1;
        }
        else
        {
            kurwa[i] = kurwa[i] + 1;
        }
    }

    cout << "The hare says:\t" << kurwa << endl;
    
    return 0;
}