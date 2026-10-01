class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hm;
        
        for (auto &s : strs) {
            string key(26, 0);

            for(char c : s) {
                key[c - 'a']++;
            }
            hm[key].emplace_back(s);
        }
        
        vector<vector<string>> res;
        for (auto group : hm) {
            res.emplace_back(group.second);
        }
        return res;
    }
};
