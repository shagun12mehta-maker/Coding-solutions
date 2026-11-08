# Contiguous Array

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a binary array `nums`, return  *the maximum length of a contiguous subarray with an equal number of* `0` *and* `1`.

 

 **Example 1:** 

```
Input: nums = [0,1]
Output: 2
Explanation: [0, 1] is the longest contiguous subarray with an equal number of 0 and 1.

```

 **Example 2:** 

```
Input: nums = [0,1,0]
Output: 2
Explanation: [0, 1] (or [1, 0]) is a longest contiguous subarray with equal number of 0 and 1.

```

 **Example 3:** 

```
Input: nums = [0,1,1,1,1,1,0,0,0]
Output: 6
Explanation: [1,1,1,0,0,0] is the longest contiguous subarray with equal number of 0 and 1.

```

 

 **Constraints:** 

- 1 <= nums.length <= 105
- nums[i] is either 0 or 1.

## Solution

**Language:** C++  
**Runtime:** 0 ms  
**Memory:** 8.4 MB  
**Submitted:** 2026-11-08T15:01:38.070Z  

```cpp
#include<unordered_map>
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
      int size=nums.size();
      unordered_map<int,int> freq;
      for(int i=0;i<size;i++){
        freq[nums[i]]++;
      } 
      if(freq[0]>freq[1]){
        return freq[1];
      }
      else{
        return freq[0];
      }
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/contiguous-array/)