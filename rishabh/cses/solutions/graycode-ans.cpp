#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

vector<string> generateGrayCode(int n)
{
    // Base Case 
    if (n == 1)
    {
        return {"0", "1"};
    }
  
      // Calculate the strings for n-1 length 
    vector<string> prevGrayCode = generateGrayCode(n - 1);
      
      // Reverse the previous Gray Code for n-1 length
    vector<string> reversedPrevGrayCode = prevGrayCode;
    reverse(reversedPrevGrayCode.begin(), reversedPrevGrayCode.end());
  
    int prevSize = prevGrayCode.size();
    int index = 0;
    while (index < prevSize)
    {
          // Prepend the character 0 in previous Gray Codes
        string appendedZero = "0" + prevGrayCode[index];
   
        // Prepend the character 1 in Reversed previous Gray Codes
        prevGrayCode[index] = "1" + reversedPrevGrayCode[index];
        prevGrayCode.push_back(appendedZero);
        index++;
    }
    return prevGrayCode;
}

int main()
{
    int n = 2;
    vector<string> grayCode = generateGrayCode(n);
    for (auto code : grayCode)
        cout << code << "\n";
    return 0;
}
