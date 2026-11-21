# Valid Palindrome

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

A phrase is a  **palindrome**  if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string `s`, return `true` *if it is a  **palindrome**, or* `false` *otherwise*.

 

Original
C++
 **Example 1:** 

```
Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.

```

 **Example 2:** 

```
Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.

```

 **Example 3:** 

```
Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.

```

 

 **Constraints:** 

- 1 <= s.length <= 2 * 105
- s consists only of printable ASCII characters.

## Solution

**Language:** C++  
**Runtime:** 2 ms (beats 39.82%)  
**Memory:** 10.2 MB (beats 25.69%)  
**Submitted:** 2026-11-21T15:39:31.816Z  

```cpp
class Solution {
public:
    bool isPalindrome(string s) {
       // int n=clean.length();
        string clean="";
        for(unsigned char c:s){
            if(isalnum(c)){
            clean+=tolower(c);
        }}
        int n=clean.length();
        int l=0;
        int r=n-1;
        while(l<r){
            if(clean[l]!=clean[r]){
                return false;
                break;
            }
            l++;
            r--;
        } 
        return true;  

    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/valid-palindrome/)