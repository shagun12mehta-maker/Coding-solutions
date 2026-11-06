class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int leftsum=0;
        int rightsum;
        int totalsum=0;
        int pivotindex=-1;
        int size=nums.size();
         for(int i=0;i<size;i++){
            totalsum+=nums[i];}
        for(int i=0;i<size;i++){
            rightsum=totalsum-leftsum-nums[i];
            if(rightsum==leftsum){
                pivotindex=i;
                break;
            }
            else{
                leftsum+=nums[i];
            }

        }
        return pivotindex;
        
    }
};