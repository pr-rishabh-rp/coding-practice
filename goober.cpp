#include <iostream>
#include <vector>
using namespace std;

using ll = long long;

int main()
{
    ll t;
    cin >> t;
    ll n;
    ll temp_input_buffer;
    vector<ll> array;
    bool ready;

    for (ll test_case = 0; test_case < t; test_case++)
    {
        cin >> n;
        array.clear();
        ready = false;
        for (ll i = 0; i < n; i++)
        {
            cin >> temp_input_buffer;
            array.push_back(temp_input_buffer);
        }

        ll previous = array[0];
        ll max_value = array[0];
        ll min_value = array[0];

        for (size_t i = 1; i < array.size(); ++i) {
            if (array[i] < previous) {
                previous--;
                array[i]++;
            }
            array[i-1] = previous;
            previous = array[i];

            // Update max and min values dynamically
            if (array[i] > max_value) {
                max_value = array[i];
            }
            if (array[i] < min_value) {
                min_value = array[i];
            }
        }

        cout << max_value - min_value << "\n";
    }

    return 0;
}