# 3Sum

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer array nums, return all the triplets `[nums[i], nums[j], nums[k]]` such that `i != j`, `i != k`, and `j != k`, and `nums[i] + nums[j] + nums[k] == 0`.

Notice that the solution set must not contain duplicate triplets.

 

Original
C++
 **Example 1:** 

```
Input:vector<int> nums = {-1, 0, 1, 2, -1, -4};Output: [[-1,-1,2],[-1,0,1]]
Explanation: 
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
The distinct triplets are [-1,0,1] and [-1,-1,2].
Notice that the order of the output and the order of the triplets does not matter.

```

 **Example 2:** 

```
Input:vector<int> nums = {0, 1, 1};Output: []
Explanation: The only possible triplet does not sum up to 0.

```

 **Example 3:** 

```
Input:vector<int> nums = {0, 0, 0};Output: [[0,0,0]]
Explanation: The only possible triplet sums up to 0.

```

 

 **Constraints:** 

- 3 <= nums.length <= 3000
- -105 <= nums[i] <= 105

## Solution

**Language:** C++  
**Runtime:** 0 ms  
**Memory:** 8.4 MB  
**Submitted:** 2026-11-24T04:55:39.577Z  

```cpp
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> zeroarray;
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                 for(int k=j+1;k<n;k++){
                    
                    if(i>0 && nums[i]==nums[i-1]){
                            continue;
                        }
                        sum=nums[i]+nums[j]+nums[k];
                    if(sum==0){
                        zeroarray.push_back({nums[i],nums[j],nums[k]});}
                        
                    }
                 }
            }   
       return zeroarray; 
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/3sum/)