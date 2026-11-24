class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int n=nums.size();
        long long sum;
        for(int i=0;i<n-3;i++){

            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            for(int j=i+1;j<n-2;j++){
                  if(j>i+1 && nums[j]==nums[j-1]){
                    continue;
            }
             int l=j+1;
            int r=n-1;
            while(l<r){
                sum=(long long)nums[i]+nums[j]+nums[l]+nums[r];
                 if(l>j+1 && nums[l]==nums[l-1]){
                      l++;
                    continue;
                  
            }
            if(r<n-1 && nums[r]==nums[r+1]){
                r--;
                    continue;
                    

            }
            if(sum==target){
                ans.push_back({nums[i],nums[j],nums[l],nums[r]});
                l++;
                r--;
            }
            else{
                sum>target?r--:l++;
            }
    }
            }
        }
        return ans;}
    
};