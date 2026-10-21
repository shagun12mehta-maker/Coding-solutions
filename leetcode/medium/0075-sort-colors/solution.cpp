class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> vec;
        int size=nums.size();
        for(int i=0;i<size;i++){
            for(int j=i+1;j<size;j++){
                if(nums[i]>nums[j]){
                    int temp=nums[i];
                    nums[i]=nums[j];
                    nums[j]=temp;
                }
            }
        }
          for(int i=0;i<size;i++){
            cout<<nums[i];
         
        }

        
    } 
};