class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() < 2) return nums.size();
        
        unordered_set<int> distinct;
        for (auto x : nums) {
            distinct.insert(x);
        }
        
        unordered_set<int> seen;

        int longest = 0;
        for (int num : nums) {
            if (seen.count(num)) continue;

            if (!distinct.count(num - 1)) {
                int length = 0;
                while(distinct.count(num)) {
                    length++;
                    seen.insert(num++);
                }
                longest = max(longest, length);
            }
        }

        return longest;
    }
};
