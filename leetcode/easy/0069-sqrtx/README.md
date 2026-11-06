# Sqrt(x)

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a non-negative integer `x`, return  *the square root of* `x` *rounded down to the nearest integer*. The returned integer should be  **non-negative**  as well.

You  **must not use**  any built-in exponent function or operator.

- For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.

 

 **Example 1:** 

```
Input: x = 4
Output: 2
Explanation: The square root of 4 is 2, so we return 2.

```

 **Example 2:** 

```
Input: x = 8
Output: 2
Explanation: The square root of 8 is 2.82842..., and since we round it down to the nearest integer, 2 is returned.

```

 

 **Constraints:** 

- 0 <= x <= 231 - 1

## Solution

**Language:** C++  
**Runtime:** 0 ms  
**Memory:** 8 MB  
**Submitted:** 2026-11-06T09:10:49.460Z  

```cpp
class Solution {
public:
    int mySqrt(int x) {
        long ans;
        if(x==0){
            ans=0;
        }
        if(x==1){
            ans=1;
        }
        else{
        long long i=x-1;
        while(i<x){
            if(i*i<=x){
                ans=i;
                break;
            }
            i--;
        }}
       return ans; 
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/sqrtx/)