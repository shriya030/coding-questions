https://leetcode.com/problems/two-sum/

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        ans = []
        for i in range(len(nums)-1):
            for j in range(i+1,len(nums)):
                if nums[i] + nums[j] == target:
                    ans = [i, j]
                    break
            if len(ans) != 0:
                break
        return ans
