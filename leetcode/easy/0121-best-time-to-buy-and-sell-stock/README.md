# Best Time to Buy and Sell Stock

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given an array `prices` where `prices[i]` is the price of a given stock on the `ith` day.

You want to maximize your profit by choosing a  **single day**  to buy one stock and choosing a  **different day in the future**  to sell that stock.

Return  *the maximum profit you can achieve from this transaction*. If you cannot achieve any profit, return `0`.

 

 **Example 1:** 

```
Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

```

 **Example 2:** 

```
Input: prices = [7,6,4,3,1]
Output: 0
Explanation: In this case, no transactions are done and the max profit = 0.

```

 

 **Constraints:** 

- 1 <= prices.length <= 105
- 0 <= prices[i] <= 104

## Solution

**Language:** C++  
**Runtime:** 1 ms (beats 41.56%)  
**Memory:** 97.1 MB (beats 98.89%)  
**Submitted:** 2026-11-04T19:20:53.248Z  

```cpp
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestbuy=prices[0];
        int max_profit=0;
        int size=prices.size();
        for(int i=1;i<size;i++){
            bestbuy=min(bestbuy,prices[i]);
             max_profit=max(prices[i]-bestbuy,max_profit);
        }
        // max_profit=max(prices[i]-bestbuy,max_profit);
        
        return max_profit;

    }

};
```

---

[View on LeetCode](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)