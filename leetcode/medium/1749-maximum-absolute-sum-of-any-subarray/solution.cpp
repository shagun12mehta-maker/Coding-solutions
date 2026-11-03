class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int size=nums.size();
        int max_sum=INT_MIN;
        int cs=0;
        for(int i=0;i<size;i++){
            cs+=nums[i];
           // if(cs<0){
             //   cs=abs(cs);
            //}
            max_sum=max(max_sum,abs(cs));
        }
        return max_sum;
    }
};