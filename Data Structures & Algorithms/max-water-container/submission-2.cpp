class Solution {
public:
    int maxArea(vector<int>& heights) {
        int area = 0;
        int l = 0, r = heights.size() - 1;

        while (l < r) {
            int local = (r - l) * min(heights[l], heights[r]);
            area = max(area, local);

            if(heights[l] == heights[r]) {
                l++;
                r--;
            } else if (heights[l] < heights[r]) l++;
            else r--;
        }

        return area;
    }
};
