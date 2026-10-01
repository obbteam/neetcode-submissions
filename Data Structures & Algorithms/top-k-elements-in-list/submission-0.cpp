class Solution {
public:
    vector<int> topKFrequent(vector<int>&nums, int k) {
        unordered_map<int, int> freqCount;
        for (int i : nums) {
            freqCount[i]++;
        }

        vector<vector<int>> bucket(nums.size() + 1);

        for (auto [num, count]: freqCount) {
            bucket[count].emplace_back(num);
        }
        
        vector<int> res;
        for (int i = bucket.size() - 1; i > 0; --i) {
            for (int n : bucket[i]) {
                res.emplace_back(n);
                if (res.size() == k) return res;
            }
        }

        return res;
    }
};
