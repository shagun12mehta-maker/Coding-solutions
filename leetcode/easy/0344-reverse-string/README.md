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
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 27.1 MB (beats 87.32%)  
**Submitted:** 2026-11-21T16:01:18.230Z  

```cpp
class Solution {
public:
    void reverseString(vector<char>& s) {
//         vector<char> ans;
    int n=s.size();
//         for(int i=n-1;i>=0;i--){
//             ans.push_back(s[i]);
//         }
//      s=ans;   
//     }
// };
int l=0;
int r=n-1;
int temp;
while(l<r){
    temp=s[l];
    s[l]=s[r];
    s[r]=temp;
    l++;
    r--;

}
}};
```

---

[View on LeetCode](https://leetcode.com/problems/reverse-string/)