class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        cur_price = prices[0] 
        profit = 0
        for i in range(1,len(prices)):
            
            if prices[i] > cur_price:
                profit += prices[i] - cur_price
                cur_price = prices[i]

            else:
                cur_price = prices[i] 
        return profit
            
        


