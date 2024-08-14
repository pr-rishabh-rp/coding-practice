#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() 
{
    vector<int> nums = {1, 2, 2, 3, 3, 3};
    int k = 2;

    unordered_map<int, int> counter;

    for (const int& num : nums)
    {
        counter[num]++;
        cout << num << " : " << counter[num] << " \t";
    }
    cout << "\n";

    int maxFreq = 0;
    int maxElem = nums[0];
    for (const auto& pair : counter)
    {
        if (pair.second > maxFreq)
        {
            maxFreq = paid.second;
            maxElem = pair.first;
        }
    }
    

    counter.erase(maxElem);
    return 0;
}
