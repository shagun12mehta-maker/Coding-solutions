# Find All Numbers Disappeared in an Array

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an array `nums` of `n` integers where `nums[i]` is in the range `[1, n]`, return  *an array of all the integers in the range*  `[1, n]`  *that do not appear in*  `nums`.

 

 **Example 1:** 

```
Input: nums = [4,3,2,7,8,2,3,1]
Output: [5,6]

```

 **Example 2:** 

```
Input: nums = [1,1]
Output: [2]

```

 

 **Constraints:** 

- n == nums.length
- 1 <= n <= 105
- 1 <= nums[i] <= n

 

 **Follow up:**  Could you do it without extra space and in `O(n)` runtime? You may assume the returned list does not count as extra space.

## Solution

**Language:** C++  
**Runtime:** 3 ms (beats 79.24%)  
**Memory:** 54.8 MB (beats 44.12%)  
**Submitted:** 2026-10-25T12:23:04.469Z  

```cpp
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int size=nums.size();
        vector<int> vec(size,false); 
        vector<int> ans;
        for(int i=0;i<size;i++){
            vec[nums[i]-1]=true;}
        for(int i=0;i<size;i++){
            if(vec[i]==false){
                ans.push_back(i+1);
            }
        }
      
    return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/)