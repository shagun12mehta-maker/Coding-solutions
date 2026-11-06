class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftsum=0;
        int n=nums.size();
        int rightsum;
        int total_sum=0;
        int pivotindex=-1;
        for(int i=0;i<n;i++){
            total_sum+=nums[i];
        }
         for(int i=0;i<n;i++){
            rightsum=total_sum-leftsum-nums[i];
            if(rightsum==leftsum){
                pivotindex=i;
                break;
            }
            else{
                leftsum+=nums[i];
            }
         }
        // if(rightsum!=leftsum)
        //     return -1;
         
         return pivotindex;
    }
};