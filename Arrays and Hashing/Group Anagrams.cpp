#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>  // for sort
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // Map to store sorted string as key and group of anagrams as value
        unordered_map<string, vector<string>> anagramGroups;

        for (string word : strs) {
            string sortedWord = word;           // Copy original word
            sort(sortedWord.begin(), sortedWord.end()); // Sort characters
            anagramGroups[sortedWord].push_back(word);  // Group original word
        }

        // Collect all groups from the map
        vector<vector<string>> result;
        for (auto group : anagramGroups) {
            result.push_back(group.second);
        }

        return result;
    }
};
