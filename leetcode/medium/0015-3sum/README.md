# 3Sum

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer array nums, return all the triplets `[nums[i], nums[j], nums[k]]` such that `i != j`, `i != k`, and `j != k`, and `nums[i] + nums[j] + nums[k] == 0`.

Notice that the solution set must not contain duplicate triplets.

 

Original
C++
 **Example 1:** 

```
Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Explanation: 
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
The distinct triplets are [-1,0,1] and [-1,-1,2].
Notice that the order of the output and the order of the triplets does not matter.

```

 **Example 2:** 

```
Input: nums = [0,1,1]
Output: []
Explanation: The only possible triplet does not sum up to 0.

```

 **Example 3:** 

```
Input: nums = [0,0,0]
Output: [[0,0,0]]
Explanation: The only possible triplet sums up to 0.

```

 

 **Constraints:** 

- 3 <= nums.length <= 3000
- -105 <= nums[i] <= 105

## Solution

**Language:** C++  
**Runtime:** 0 ms  
**Memory:** 8.3 MB  
**Submitted:** 2026-11-24T06:04:12.749Z  

```cpp
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
         vector<vector<int>> zeroarray;
        sort(nums.begin(),nums.end());
    int n=nums.size();
     for(int i=0;i<n-2;i++){
             int l=i+1;
            int r=n-1;
             if(i>0 && nums[i]==nums[i-1]){
                            continue;
                        }
                       
                        while(l<r){
                 if(l>i+1&& nums[l]==nums[l-1] ){
                    l++;
                            continue;
                        }
                        if(r<n-1 && nums[r]==nums[r+1]){
                            r--;
                            continue;
                        }
                       int sum=nums[i]+nums[l]+nums[r];
                    if(sum==0){
                        zeroarray.push_back({nums[i],nums[l],nums[r]});
                        l++;
                        r--;
                        }
                        else{
                        
                         sum>0?r--:l++;
                 }}
                        }
       return zeroarray; 
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/3sum/)