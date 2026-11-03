# Maximum Absolute Sum of Any Subarray

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given an integer array `nums`. The  **absolute sum**  of a subarray `[numsl, numsl+1,..., numsr-1, numsr]` is `abs(numsl + numsl+1 +... + numsr-1 + numsr)`.

Return  *the  **maximum**  absolute sum of any  **(possibly empty)**  subarray of* `nums`.

Note that `abs(x)` is defined as follows:

- If x is a negative integer, then abs(x) = -x.
- If x is a non-negative integer, then abs(x) = x.

 

 **Example 1:** 

```
Input: nums = [1,-3,2,3,-4]
Output: 5
Explanation: The subarray [2,3] has absolute sum = abs(2+3) = abs(5) = 5.

```

 **Example 2:** 

```
Input: nums = [2,-5,1,-4,3,-2]
Output: 8
Explanation: The subarray [-5,1,-4] has absolute sum = abs(-5+1-4) = abs(-8) = 8.

```

 

 **Constraints:** 

- 1 <= nums.length <= 105
- -104 <= nums[i] <= 104

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 45.1 MB (beats 87.30%)  
**Submitted:** 2026-11-03T16:58:55.513Z  

```cpp
class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int size=nums.size();
        int max_sum=INT_MIN;
        int min_sum=INT_MAX;
        int cs=0;
        int cs1=0;
        int ans;
        for(int i=0;i<size;i++){
            cs+=nums[i];
            cs1+=nums[i];
            max_sum=max(max_sum,cs);
            if(cs<0){
                cs=0;
            }
            min_sum=min(min_sum,cs1);
            if(cs1>0){
                cs1=0;
            }
        }
        if(abs(min_sum)>abs(max_sum)){
            ans=abs(min_sum);
        }
else{
    ans=abs(max_sum);
}
        

        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/maximum-absolute-sum-of-any-subarray/)