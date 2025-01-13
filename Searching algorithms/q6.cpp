// painter partition problem
#include <iostream>
#include <vector>
#include <numeric> // For accumulate
#include <algorithm> // For max_element
using namespace std;

// Function to check if the allocation is possible
bool isPossible(vector<int>& arr, int n, int k, int maxTime) {
    int painterCount = 1;
    int timeSum = 0;

    for (int time : arr) {
        if (timeSum + time > maxTime) {
            // Assign boards to the next painter
            painterCount++;
            timeSum = time;

            if (painterCount > k) {
                return false; // More painters needed than available
            }
        } else {
            timeSum += time;
        }
    }
    return true;
}

// Function to find the minimum time
int paintersPartition(vector<int>& arr, int n, int k) {
    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);
    int result = high;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (isPossible(arr, n, k, mid)) {
            result = mid; // Update result and try for smaller time
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return result;
}

int main() {
    vector<int> arr = {10, 20, 30, 40}; // Time for each board
    int n = arr.size();
    int k = 2; // Number of painters

    int result = paintersPartition(arr, n, k);
    cout << "The minimum time to paint all boards is: " << result << endl;

    return 0;
}
