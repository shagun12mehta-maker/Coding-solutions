# Subarray Sum Equals K

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array of integers `nums` and an integer `k`, return  *the total number of subarrays whose sum equals to*  `k`.

A subarray is a contiguous  **non-empty**  sequence of elements within an array.

 

 **Example 1:** 

```
Input: nums = [1,1,1], k = 2
Output: 2

```

 **Example 2:** 

```
Input: nums = [1,2,3], k = 3
Output: 2

```

 

 **Constraints:** 

- 1 <= nums.length <= 2 * 104
- -1000 <= nums[i] <= 1000
- -107 <= k <= 107

## Solution

**Language:** C++  
**Runtime:** 40 ms (beats 71.59%)  
**Memory:** 45.3 MB (beats 76.77%)  
**Submitted:** 2026-11-09T10:04:17.132Z  

```cpp
#include<unordered_map>
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int cs=0;
        mp[0]=1;
        int n=nums.size();
        int count=0;

        for
        (int i=0;i<n;i++){
            cs+=nums[i];
            if(mp.find(cs-k)!=mp.end()){
                count+=mp[cs-k];
            }
            mp[cs]++;

        }
        return count;

        
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/subarray-sum-equals-k/)