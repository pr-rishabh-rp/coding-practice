#include <bits/stdc++.h>
#include <omp.h>
#include <algorithm>
#include <chrono>  // For timing
using namespace std;

// Function to generate a random array of integers in the range [-5000, 5000]
vector<int> generateRandomArray(int size) {
    vector<int> randomArray(size);
    srand(time(0));  // Seed the random number generator

    for (int i = 0; i < size; ++i) {
        randomArray[i] = rand() % 10001 - 5000;  // Random numbers between -5000 and 5000
    }
    return randomArray;
}

// Bitonic merge function
void bitonicMerge(vector<int> &array, int low, int count, bool direction) {
    if (count > 1) {
        int halfCount = count / 2;
        #pragma omp parallel for
        for (int i = low; i < low + halfCount; ++i) {
            if ((array[i] > array[i + halfCount]) == direction) {
                swap(array[i], array[i + halfCount]);
            }
        }
        bitonicMerge(array, low, halfCount, direction);
        bitonicMerge(array, low + halfCount, halfCount, direction);
    }
}

// Bitonic sort function
void bitonicSort(vector<int> &array, int low, int count, bool direction) {
    if (count > 1) {
        int halfCount = count / 2;
        #pragma omp parallel sections
        {
            #pragma omp section
            bitonicSort(array, low, halfCount, true);   // Sort in ascending order

            #pragma omp section
            bitonicSort(array, low + halfCount, halfCount, false);  // Sort in descending order
        }
        bitonicMerge(array, low, count, direction);
    }
}

int main() {
    // Generate an array of random integers with a size greater than 1000
    int arraySize = 150000;  // Example: Set the array size to 150,000
    vector<int> randomArray = generateRandomArray(arraySize);

    cout << "Sorting an array of size " << arraySize << " using Bitonic Sort." << endl;

    // Timing the sorting process
    auto startTime = chrono::high_resolution_clock::now();

    // Bitonic sort requires the size to be a power of 2
    int nextPowerOf2 = 1;
    while (nextPowerOf2 < arraySize) {
        nextPowerOf2 *= 2;
    }
    randomArray.resize(nextPowerOf2);  // Resize to the next power of 2

    #pragma omp parallel
    {
        #pragma omp single
        bitonicSort(randomArray, 0, randomArray.size(), true);
    }

    auto endTime = chrono::high_resolution_clock::now();
    chrono::duration<double> elapsedTime = endTime - startTime;

    cout << "Time taken: " << elapsedTime.count() << " seconds" << endl;

    return 0;
}