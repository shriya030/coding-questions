https://leetcode.com/problems/best-time-to-buy-and-sell-stock/


class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        profit = 0
        if len(prices) == 0:
            return 0
        min_ele = prices[0]
        for i in range(1, len(prices)):
            min_ele = min(min_ele, prices[i])
            profit = max(profit, prices[i] - min_ele)
        return profit
