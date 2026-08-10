class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        if(s==t)
        return true;
        else
        return false;

    }
};



// unordered_map<char, int> first;
// unordered_map<char, int> second;