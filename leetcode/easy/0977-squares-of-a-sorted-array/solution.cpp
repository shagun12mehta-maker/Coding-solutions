class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
         vector<int> ans(n);
        // int n=nums.size();     
        int l=0;
        int r=n-1;
        int pos=n-1;
        // int leftsqr=nums[l]*nums[l];
        // int rightsqr=nums[r]*nums[r];
        while(l<=r){
        int leftsqr=nums[l]*nums[l];
        int rightsqr=nums[r]*nums[r];
            if(leftsqr>rightsqr){
               ans[pos]=leftsqr;
               l++;
            }
            else{
                 ans[pos]=rightsqr;
                 r--;
            }
            pos--;
        
        }
        return ans;
    }
};