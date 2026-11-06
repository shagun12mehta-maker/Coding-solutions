class Solution {
public:
    double myPow(double x, int n) {
        if(n==0){
            return 1.0;
        }
        if(x==0){
            return 0.0;
        }
        if(x==1){
            return 1.0;
        }
         if(x==-1){
            if(n%2==0){
            return 1;
            }}
            if(x==-1){
            if(n%2!=0){
            return -1;
            }}
            
        
        double ans=1;
        long binaryform=n;
        if(binaryform<0){
            x=1/x;
            binaryform=-binaryform;
        }
        while(binaryform>0){
            int digit=binaryform%2;
            if(digit==1){
                ans*=x;
            }
           
           x= x*x;
           binaryform/=2;
        }
        return ans;
    }
};