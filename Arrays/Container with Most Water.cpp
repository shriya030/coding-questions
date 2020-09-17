https://leetcode.com/problems/container-with-most-water/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0, j = height.size() - 1;
        int max_vol = -1;
        int vol = 0;
        while(i<j) {
            vol = (j - i) * min(height[i], height[j]);
            if (height[i] <= height[j])
                i++;
            else
                j--;
            max_vol = max(max_vol, vol);
        }
    return max_vol;
    }
};
