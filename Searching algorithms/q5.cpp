// book allocation problem
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Function to check if it is possible to allocate books
bool isPossible(vector<int>& books, int n, int m, int maxPages) {
    int studentCount = 1;
    int pagesSum = 0;

    for (int pages : books) {
        if (pages > maxPages) {
            return false; // Single book exceeds maxPages, allocation not possible
        }

        if (pagesSum + pages > maxPages) {
            // Assign books to the next student
            studentCount++;
            pagesSum = pages;

            if (studentCount > m) {
                return false; // More students needed than available
            }
        } else {
            pagesSum += pages;
        }
    }
    return true;
}

// Function to find the minimum of the maximum pages allocation
int bookAllocation(vector<int>& books, int n, int m) {
    if (m > n) {
        return -1; // Not enough books for each student
    }

    int low = *max_element(books.begin(), books.end());
    int high = accumulate(books.begin(), books.end(), 0);
    int result = INT_MAX;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (isPossible(books, n, m, mid)) {
            result = mid; // Update result and try for smaller maximum
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return result;
}

int main() {
    vector<int> books = {12, 34, 67, 90};
    int n = books.size();
    int m = 2; // Number of students

    int result = bookAllocation(books, n, m);

    if (result != -1) {
        cout << "The minimum of the maximum pages allocated to a student is: " << result << endl;
    } else {
        cout << "Allocation not possible!" << endl;
    }

    return 0;
}
