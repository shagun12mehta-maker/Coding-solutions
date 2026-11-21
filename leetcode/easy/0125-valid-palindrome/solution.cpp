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