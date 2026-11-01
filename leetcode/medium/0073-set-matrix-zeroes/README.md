# Set Matrix Zeroes

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an `m x n` integer matrix `matrix`, if an element is `0`, set its entire row and column to `0`'s.

You must do it in place.

 

 **Example 1:** 

```
Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
Output: [[1,0,1],[0,0,0],[1,0,1]]

```

 **Example 2:** 

```
Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]

```

 

 **Constraints:** 

- m == matrix.length
- n == matrix[0].length
- 1 <= m, n <= 200
- -231 <= matrix[i][j] <= 231 - 1

 

 **Follow up:** 

- A straightforward solution using O(mn) space is probably a bad idea.
- A simple improvement uses O(m + n) space, but still not the best solution.
- Could you devise a constant space solution?

## Solution

**Language:** C++  
**Runtime:** 28 ms (beats 8.51%)  
**Memory:** 21.5 MB (beats 10.95%)  
**Submitted:** 2026-11-01T10:41:59.689Z  

```cpp
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> zeromatrix;
        zeromatrix=matrix;
        int row=matrix.size();
        int col=matrix[0].size();
        for(int m=0;m<row;m++){
            for(int n=0;n<col;n++){
                
                if(matrix[m][n]==0){
                     int x=m;
                     int y=n;
                   // for(int i=0;i<row;i++){
                        for(int j=0;j<col;j++){

                            zeromatrix[x][j]=0;}
                           for(int i=0;i<row;i++){ 
                            zeromatrix[i][y]=0;
                        }  
                    
                     // for(int i=0;i<row;i++){
                       // for(j=y;j<=y;j++){
                         //   zeromatrix[i][j]=0;
                      //  }  
                    //}

                }
            }
        }
        matrix=zeromatrix;
        
        
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/set-matrix-zeroes/)