class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int size=nums.size();
        int max_sum=INT_MIN;
        int min_sum=INT_MAX;
        int cs=0;
        int cs1=0;
        int ans;
        for(int i=0;i<size;i++){
            cs+=nums[i];
            cs1+=nums[i];
            max_sum=max(max_sum,cs);
            if(cs<0){
                cs=0;
            }
            min_sum=min(min_sum,cs1);
            if(cs1>0){
                cs1=0;
            }
        }
        if(abs(min_sum)>abs(max_sum)){
            ans=abs(min_sum);
        }
else{
    ans=abs(max_sum);
}
        

        return ans;
    }
};