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