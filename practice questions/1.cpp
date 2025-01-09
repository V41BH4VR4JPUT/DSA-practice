// asked in hashedin by deloitte company
// question : Given an array of integers nums, find the first integer that appears an odd number of times in the array. If no such integer exists, return -1.
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
int findFirstOddOccurrence(const vector<int>& nums) {
    unordered_map<int, int> frequency;

    // Count the occurrences of each number
    for (auto num : nums) {
        cout<<" "<<frequency[num]++<<endl;
    }

    // Find the first number with an odd frequency
    for (auto num : nums) {
        if (frequency[num] % 2 != 0) {
            return num;
        }
    }

    // If no odd occurrence is found (edge case)
    return -1; // Assuming all numbers are positive
}

int main() {
    vector<int> nums = {2, 3, 4, 3, 2, 4, 4};
    int result = findFirstOddOccurrence(nums);
    if (result != -1) {
        cout << "First integer with odd occurrences: " << result << endl; // Output: 4
    } else {
        cout << "No integer with odd occurrences found." << endl;
    }
    return 0;
}
