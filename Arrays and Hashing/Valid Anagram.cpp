class Solution {
public:
    bool isAnagram(string s, string t) {
        //check if the frequency of both strings are the same or not
        if(s.length() != t.length()){
            return false;
        }
        //sorting the strings by sort function
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        return s==t;

    }
};
