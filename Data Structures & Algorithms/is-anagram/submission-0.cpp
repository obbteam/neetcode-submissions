class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        unordered_map<char, int> letterCount;
        for (char c : s) {
            letterCount[c]++;
        }

        for (char c : t) {
            if (!letterCount.count(c)) return false;
            letterCount[c]--;
            if (letterCount[c] < 0) return false;
        }

        return true;
    }
};
