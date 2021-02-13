// https://leetcode.com/contest/leetcode-weekly-contest-19/problems/reverse-pairs/

class Solution {
public:
    int reversePairs(vector<int>& nums) {
        return mergeSort(nums, 0, nums.size() - 1);
    }
    
    int mergeSort(vector<int>& nums, int low, int high) {
        if(low >= high) return 0;
        int mid = low + (high - low)/2;
        int count = mergeSort(nums, low, mid) + mergeSort(nums, mid + 1, high);
        count += mergeCount(nums, low, mid, high);
        return count;
    }
    
    int mergeCount(vector<int>& nums, int low, int mid, int high) {
        int count = 0, j = mid + 1;
        for(int i = low; i <= mid; i++) {
            while(j <= high && nums[i] > (long long)(2LL * nums[j]))
                j++;
            count += j - (mid + 1);
        }
        vector<int> temp;
        int i = low;
        j = mid + 1;
        while(i <= mid && j <= high) {
            if(nums[i] <= nums[j])
                temp.push_back(nums[i++]);
            else
                temp.push_back(nums[j++]);
        }
        while(i <= mid)
            temp.push_back(nums[i++]);
        while(j <= high)
            temp.push_back(nums[j++]);
        for(int i = low; i <= high; i++)
            nums[i] = temp[i - low];
        return count;
    } 
};
