class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        vector<int> letterCount(26,0);
        for (int i = 0; i < s.length(); ++i) {
            letterCount[s[i] - 'a']++;
            letterCount[t[i] - 'a']--;
        }

        for (int i : letterCount) {
            if (i != 0) return false;
        }

        return true;
    }
};
