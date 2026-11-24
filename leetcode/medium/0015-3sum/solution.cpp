class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
         vector<vector<int>> zeroarray;
        sort(nums.begin(),nums.end());
    int n=nums.size();
     for(int i=0;i<n-2;i++){
             int l=i+1;
            int r=n-1;
             if(i>0 && nums[i]==nums[i-1]){ continue;
                        }
                       
                        while(l<r){
                 if(l>i+1&& nums[l]==nums[l-1] ){
                    l++;   continue;
                        }
                        if(r<n-1 && nums[r]==nums[r+1]){
                            r--;  continue;
                        }
                       int sum=nums[i]+nums[l]+nums[r];
                    if(sum==0){
                        zeroarray.push_back({nums[i],nums[l],nums[r]});
                        l++;
                        r--;
                        }
                        else{
                        
                         sum>0?r--:l++;
                 }}
                        }
       return zeroarray; 
    }
};