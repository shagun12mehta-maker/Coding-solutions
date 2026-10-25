# Contains Duplicate

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an integer array `nums`, return `true` if any value appears  **at least twice**  in the array, and return `false` if every element is distinct.

 

 **Example 1:** 

 **Input:**  nums = [1,2,3,1]

 **Output:**  true

 **Explanation:** 

The element 1 occurs at the indices 0 and 3.

 **Example 2:** 

 **Input:**  nums = [1,2,3,4]

 **Output:**  false

 **Explanation:** 

All elements are distinct.

 **Example 3:** 

 **Input:**  nums = [1,1,1,3,3,4,3,2,4,2]

 **Output:**  true

 

 **Constraints:** 

- 1 <= nums.length <= 105
- -109 <= nums[i] <= 109

## Solution

**Language:** C++  
**Runtime:** 0 ms  
**Memory:** 7.9 MB  
**Submitted:** 2026-10-25T13:14:37.079Z  

```cpp
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int size=nums.size();
       bool flag=false;
        for(int i=0;i<size;i++){
            int count=0;
              flag=false;
            for(int j=0;j<size;j++){
                if(nums[i]==nums[j]){
                    count+=1;
                }
                if(count>1){
                    flag=true;
                }
                

            }

        }
        return flag;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/contains-duplicate/)