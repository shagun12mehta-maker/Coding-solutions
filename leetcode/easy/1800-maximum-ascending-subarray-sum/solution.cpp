class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int size=nums.size();
       int max_sum=INT_MIN;
       int cs=nums[0];
       if(size==1){
        max_sum=max(cs,max_sum);
       }
       else{
        for(int i=1;i<size;i++){
             max_sum=max(cs,max_sum);
             cs+=nums[i];
             
            if(nums[i]<nums[i-1] ){
                cs=nums[i];
                }
          
           max_sum=max(cs,max_sum);
           
            }}
 return max_sum;
        
    }
};