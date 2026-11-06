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
        for(int i =x-1;i>0;i--){
            if(i*i<=x){
                ans=i;
                break;
            }
        }}
       return ans; 
    }
};