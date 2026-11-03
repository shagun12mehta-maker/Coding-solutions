# Maximum Ascending Subarray Sum

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an array of positive integers `nums`, return the  **maximum**  possible sum of an strictly increasing subarray in `nums`.

A subarray is defined as a contiguous sequence of numbers in an array.

 

 **Example 1:** 

```
Input: nums = [10,20,30,5,10,50]
Output: 65
Explanation: [5,10,50] is the ascending subarray with the maximum sum of 65.

```

 **Example 2:** 

```
Input: nums = [10,20,30,40,50]
Output: 150
Explanation: [10,20,30,40,50] is the ascending subarray with the maximum sum of 150.

```

 **Example 3:** 

```
Input: nums = [12,17,15,13,10,11,12]
Output: 33
Explanation: [10,11,12] is the ascending subarray with the maximum sum of 33.

```

 

 **Constraints:** 

- 1 <= nums.length <= 100
- 1 <= nums[i] <= 100

## Solution

**Language:** C++  
**Runtime:** 0 ms  
**Memory:** 8.1 MB  
**Submitted:** 2026-11-03T14:22:39.666Z  

```cpp
class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int size=nums.size();
       int max_sum=INT_MIN;
       int cs=nums[0];
       if(size==1){
        max_sum=max(cs,max_sum);
       }
       else{
        for(int i=1;i<size;i++){
             max_sum=max(cs,max_sum);
             cs+=nums[i];
             
            if(nums[i]<nums[i-1] ){
                cs=nums[i];
                }
          
           max_sum=max(cs,max_sum);
           
            }}
 return max_sum;
        
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/maximum-ascending-subarray-sum/)