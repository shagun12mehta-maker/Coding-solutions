class Solution {
public:
    bool isPowerOfTwo(int n) {
         bool flag=true;
        if(n<=0){
            flag=false;
        }
    while(n>0){
        int digit=n%2;
        if(digit!=0 && n!=1){
            flag=false;
            break;
        }
        else{
            n=n/2;
        }
    }
    return flag;
    }
        
    
};