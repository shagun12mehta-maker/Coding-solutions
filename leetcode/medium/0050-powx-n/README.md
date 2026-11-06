# Pow(x, n)

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Implement pow(x, n), which calculates `x` raised to the power `n` (i.e., `xn`).

 

 **Example 1:** 

```
Input: x = 2.00000, n = 10
Output: 1024.00000

```

 **Example 2:** 

```
Input: x = 2.10000, n = 3
Output: 9.26100

```

 **Example 3:** 

```
Input: x = 2.00000, n = -2
Output: 0.25000
Explanation: 2-2 = 1/22 = 1/4 = 0.25

```

 

 **Constraints:** 

- -100.0 < x < 100.0
- -231 <= n <= 231-1
- n is an integer.
- Either x is not zero or n > 0.
- -104 <= xn <= 104

## Solution

**Language:** C++  
**Runtime:** 0 ms  
**Memory:** 7.8 MB  
**Submitted:** 2026-11-06T08:13:42.630Z  

```cpp
class Solution {
public:
    double myPow(double x, int n) {
        if(n==0){
            return 1.0;
        }
        if(x==0){
            return 0.0;
        }
        if(x==1){
            return 1.0;
        }
         if(x==-1){
            if(n%2==0){
            return 1;
            }}
            if(x==-1){
            if(n%2!=0){
            return -1;
            }}
            
        
        double ans=1;
        long binaryform=n;
        if(binaryform<0){
            x=1/x;
            binaryform=-binaryform;
        }
        while(binaryform>0){
            int digit=binaryform%2;
            if(digit==1){
                ans*=x;
            }
           
           x= x*x;
           binaryform/=2;
        }
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/powx-n/)