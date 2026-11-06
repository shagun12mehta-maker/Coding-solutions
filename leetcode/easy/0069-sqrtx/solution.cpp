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