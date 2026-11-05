# Power of Three

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an integer `n`, return  *`true` if it is a power of three. Otherwise, return `false`*.

An integer `n` is a power of three, if there exists an integer `x` such that `n == 3x`.

 

 **Example 1:** 

```
Input: n = 27
Output: true
Explanation: 27 = 33

```

 **Example 2:** 

```
Input: n = 0
Output: false
Explanation: There is no x where 3x = 0.

```

 **Example 3:** 

```
Input: n = -1
Output: false
Explanation: There is no x where 3x = (-1).

```

 

 **Constraints:** 

- -231 <= n <= 231 - 1

 

 **Follow up:**  Could you solve it without loops/recursion?

## Solution

**Language:** C++  
**Runtime:** 13 ms (beats 17.53%)  
**Memory:** 8.6 MB (beats 97.67%)  
**Submitted:** 2026-11-05T05:26:12.791Z  

```cpp
class Solution {
public:
    bool isPowerOfThree(int n) {
        bool flag=true;
        if(n<=0){
            flag=false;
        }
    while(n>0){
        int digit=n%3;
        if(digit!=0 && n!=1){
            flag=false;
            break;
        }
        else{
            n=n/3;
        }
    }
    return flag;
    }
};

```

---

[View on LeetCode](https://leetcode.com/problems/power-of-three/)