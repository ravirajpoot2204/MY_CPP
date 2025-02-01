#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> countMap;
        unordered_set<int> occurrenceSet;

        // Count occurrences of each element
        for (int num : arr) {
            countMap[num]++;
        }

        // Check if occurrences are unique
        for (auto& pair : countMap) {
            if (occurrenceSet.find(pair.second) != occurrenceSet.end()) {
                // it means a duplicate occurrence is found
                return false;
            }
            occurrenceSet.insert(pair.second);
        }

        return true; // All occurrence counts are unique
    }
};

int main() {
    Solution solution;
    vector<int> arr1 = {1, 2, 2, 1, 1, 3};
    vector<int> arr2 = {1, 2};
    vector<int> arr3 = {-3, 0, 1, -3, 1, 1, 1, -3, 10, 0};

    cout << boolalpha; // Print bools as true/false
    cout << "Example 1: " << solution.uniqueOccurrences(arr1) << endl; // Output: true
    cout << "Example 2: " << solution.uniqueOccurrences(arr2) << endl; // Output: false
    cout << "Example 3: " << solution.uniqueOccurrences(arr3) << endl; // Output: true

    return 0;
}