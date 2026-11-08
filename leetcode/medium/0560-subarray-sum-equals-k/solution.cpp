class Solution {
public:
    int subarraySum(vector<int>& nums, int k){
        int n=nums.size();
        int totalsum=0;
        int count=0;
       for(int i=0;i<n;i++){
        int totalsum=0;
          for(int j=i;j<n;j++){
          
                totalsum+=nums[j];
            
            if(totalsum==k){
                count++;
                    }
              
          }
       }

       return count;
    }
};