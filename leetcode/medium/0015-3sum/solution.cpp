class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> zeroarray;
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                 for(int k=j+1;k<n;k++){
                    
                    if(i>0 && nums[i]==nums[i-1]){
                            continue;
                        }
                        sum=nums[i]+nums[j]+nums[k];
                    if(sum==0){
                        zeroarray.push_back({nums[i],nums[j],nums[k]});}
                        
                    }
                 }
            }   
       return zeroarray; 
    }
};