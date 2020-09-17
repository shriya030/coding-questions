
https://leetcode.com/problems/3sum/

class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        ans = []
        nums.sort()
        for i in range(len(nums) - 2):
            l = i + 1
            j = len(nums) - 1
            if i > 0 and nums[i] == nums[i - 1]:
                continue;
            while l < j:
                sum = nums[i] + nums[j] + nums[l]
                if sum == 0:
                    while l < j and nums[l] == nums[l + 1]:
                        l+=1
                    while j > l and nums[j] == nums[j - 1]:
                        j-=1
                    ans.append([nums[i], nums[l], nums[j]])
                    l += 1
                    j -= 1
                elif sum < 0:
                    l += 1
                elif sum > 0:
                    j -= 1              
        return ans;
