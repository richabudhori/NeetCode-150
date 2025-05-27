#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;

        // Loop through each number in the array
        for (int num : nums) {
            // If the number is already in the set, it's a duplicate
            if (seen.count(num)) {
                return true;
            }
            // Otherwise, add it to the set
            seen.insert(num);
        }

        // If loop ends with no duplicates found
        return false;
    }
};

