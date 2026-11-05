# Power of Four

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an integer `n`, return  *`true` if it is a power of four. Otherwise, return `false`*.

An integer `n` is a power of four, if there exists an integer `x` such that `n == 4x`.

 

 **Example 1:** 

```
Input: n = 16
Output: true

```

 **Example 2:** 

```
Input: n = 5
Output: false

```

 **Example 3:** 

```
Input: n = 1
Output: true

```

 

 **Constraints:** 

- -231 <= n <= 231 - 1

 

 **Follow up:**  Could you solve it without loops/recursion?

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 7.7 MB (beats 95.96%)  
**Submitted:** 2026-11-05T06:19:34.231Z  

```cpp
class Solution {
public:
    bool isPowerOfFour(int n) {
        int flag=true;
        if(n<=0){
           return false;
        }
      while(n>0){
        int digit=n%4;
        if(digit!=0 && n!=1){
            return false;
        }
        else{
            n/=4;
        }

      }
      return flag;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/power-of-four/)