# Reverse String

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Write a function that reverses a string. The input string is given as an array of characters `s`.

You must do this by modifying the input array in-place with `O(1)` extra memory.

 

Original
C++
 **Example 1:** 

```
Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]

```

 **Example 2:** 

```
Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]

```

 

 **Constraints:** 

- 1 <= s.length <= 105
- s[i] is a printable ascii character.

## Solution

**Language:** C++  
**Runtime:** 0 ms  
**Memory:** 8.1 MB  
**Submitted:** 2026-11-21T15:51:55.659Z  

```cpp
class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> ans;
        int n=s.size();
        for(int i=n-1;i>0;i--){
            ans.push_back(s[i]);
        }
        
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/reverse-string/)