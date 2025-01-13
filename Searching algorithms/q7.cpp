// aggresive cows
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to check if it is possible to place cows with at least `minDist` distance
bool isPossible(vector<int>& stalls, int n, int k, int minDist) {
    int count = 1; // Place the first cow at the first stall
    int lastPlaced = stalls[0];

    for (int i = 1; i < n; i++) {
        if (stalls[i] - lastPlaced >= minDist) {
            count++;
            lastPlaced = stalls[i]; // Place the next cow
            if (count == k) {
                return true;
            }
        }
    }
    return false;
}

// Function to find the largest minimum distance
int aggressiveCows(vector<int>& stalls, int n, int k) {
    sort(stalls.begin(), stalls.end()); // Sort the stalls
    
    int low = 1;
    int high = stalls[n-1] - stalls[0];
    int result = 0;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (isPossible(stalls, n, k, mid)) {
            result = mid; // Update result and try for a larger distance
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return result;
}

int main() {
    vector<int> stalls = {1, 2, 8, 4, 9};
    int n = stalls.size();
    int k = 3; // Number of cows

    int result = aggressiveCows(stalls, n, k);
    cout << "The largest minimum distance is: " << result << endl;

    return 0;
}
