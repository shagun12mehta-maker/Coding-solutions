class Solution {
public:
    int mySqrt(int x) {
        int ans;
        if(x==0){
            ans=0;
        }
        for(int i =x-1;i>0;i--){
            if(i*i<=x){
                ans=i;
                break;
            }
        }
       return ans; 
    }
};