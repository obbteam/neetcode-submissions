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
        for (int i = 0; i < nums.size(); ++i) {
            if (seen.count(nums[i])) continue;

            if (!distinct.count(nums[i] - 1)) {
                int cur = 0;
                while(distinct.count(nums[i])) {
                    cur++;
                    seen.insert(nums[i]);
                    nums[i]+=1;
                }
                longest = max(longest, cur);
            }
        }

        return longest;
    }
};
