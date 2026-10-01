class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> left(nums.size() + 1, 1), right(nums.size() + 1, 1);

        int j = nums.size() - 1;
        for (int i = 0; i < nums.size(); ++i) {
            left[i + 1] = left[i] * nums[i];
            right[j] = right[j + 1] * nums[j];
            --j;
        }

        vector<int> res(nums.size());
        for (int i = 0; i < nums.size(); ++i) {
            res[i] = left[i] * right[i+1];
        }

        return res;
    }
};
