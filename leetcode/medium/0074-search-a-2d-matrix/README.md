# Search a 2D Matrix

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given an `m x n` integer matrix `matrix` with the following two properties:

- Each row is sorted in non-decreasing order.
- The first integer of each row is greater than the last integer of the previous row.

Given an integer `target`, return `true`  *if*  `target`  *is in*  `matrix`  *or*  `false`  *otherwise*.

You must write a solution in `O(log(m * n))` time complexity.

 

 **Example 1:** 

```
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true

```

 **Example 2:** 

```
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
Output: false

```

 

 **Constraints:** 

- m == matrix.length
- n == matrix[i].length
- 1 <= m, n <= 100
- -104 <= matrix[i][j], target <= 104

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 13.1 MB (beats 98.93%)  
**Submitted:** 2026-11-01T09:43:00.332Z  

```cpp
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int start=0;
        int rows=matrix.size();
        int cols=matrix[0].size();
        int end=rows*cols-1;
       
        bool flag=true;
      
        while(start<=end){
             int mid=start+(end-start)/2;
               int row=mid/cols;
               int col=mid%cols;
                if(matrix[row][col]>target){
                     end=mid-1;       
        }
        else if(matrix[row][col]<target){
            start=mid+1;
        }
        else if (matrix[row][col]==target){
            return flag;
        }
        }
        flag=false;
        
       
        
       return flag;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/search-a-2d-matrix/)