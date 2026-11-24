# 3Sum Closest

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given an integer array `nums` of length `n` and an integer `target`.

Find three integers at  **distinct indices**  in `nums` such that the sum is  **closest**  to `target`.

Return the sum of the three integers.

You may assume that each input would have  **exactly**  one solution.

 

Original
C++
 **Example 1:** 

```
Input: nums = [-1,2,1,-4], target = 1
Output: 2
Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).

```

 **Example 2:** 

```
Input: nums = [0,0,0], target = 1
Output: 0
Explanation: The sum that is closest to the target is 0. (0 + 0 + 0 = 0).

```

 

 **Constraints:** 

- 3 <= nums.length <= 500
- -1000 <= nums[i] <= 1000
- -104 <= target <= 104

## Solution

**Language:** C++  
**Runtime:** 881 ms (beats 5.00%)  
**Memory:** 13.6 MB (beats 99.92%)  
**Submitted:** 2026-11-24T03:04:08.600Z  

```cpp
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        int closest=nums[0]+nums[1]+nums[2];
        int sum=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
             for(int j=i+1;j<n-1;j++){
                  for(int k=j+1;k<n;k++){
                   sum=nums[i]+nums[j]+nums[k];
                      if(abs(sum - target) < abs(closest - target)) {
    closest = sum;
    }

        }
             }
        }
    

     return closest;
     }
     
};
```

---

[View on LeetCode](https://leetcode.com/problems/3sum-closest/)