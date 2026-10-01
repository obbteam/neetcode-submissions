class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() < 2) return nums.size();
        
        unordered_set<int> distinct;
        for (auto x : nums) {
            distinct.insert(x);
        }
        
        int longest = 0;
        for (int num : distinct) {
            if (!distinct.count(num - 1)) {
                int length = 0;
                while(distinct.count(num)) {
                    length++;
                    num++;
                }
                longest = max(longest, length);
            }
        }

        return longest;
    }
};
