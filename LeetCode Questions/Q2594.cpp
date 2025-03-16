// Leetcode ques 2594 : Minimum time to repair cars

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long repairCars(vector<int>& ranks, int cars) {
        long long left = 0;
        long long right = static_cast<long long>(*std::min_element(ranks.begin(), ranks.end())) * cars * cars;

        while (left < right) {
            long long mid = left + (right - left) / 2;
            if (canRepairAllCars(ranks, cars, mid))
                right = mid;
            else
                left = mid + 1;
        }

        return left;
    }

private:
    bool canRepairAllCars(const std::vector<int>& ranks, int cars, long long time) {
        long long totalCarsRepaired = 0;
        for (int rank : ranks) {
            totalCarsRepaired += static_cast<long long>(std::sqrt(time / rank));
            if (totalCarsRepaired >= cars)
                return true;
        }
        return totalCarsRepaired >= cars;
    }
};