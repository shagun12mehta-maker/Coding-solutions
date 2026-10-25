class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int size=nums.size();
       bool flag=false;
        for(int i=0;i<size;i++){
            int count=0;
              flag=false;
            for(int j=0;j<size;j++){
                if(nums[i]==nums[j]){
                    count+=1;
                }
                if(count>1){
                    flag=true;
                }
                

            }

        }
        return flag;
    }
};