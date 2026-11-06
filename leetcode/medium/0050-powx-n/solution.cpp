class Solution {
public:
    double myPow(double x, int n) {
        if(n==0){
            return 1.0;
        }
        // if(x==0){
        //     return 0.0;
        // }
        
        //  if(x==-1 && n%2==0){
        //     return 1;
        //     }
        //     if(x==-1 && n%2!=0){
        //     return -1;
        //     }
            
        
        double ans=1;
        long binaryform=n;
        if(n<0){
            x=1.0/x;
            binaryform=-binaryform;
        }
        while(binaryform>0){
            
            if(binaryform%2==1){
                ans*=x;
            }
           
           x*=x;
           binaryform/=2;
        }
        return ans;
    }
};