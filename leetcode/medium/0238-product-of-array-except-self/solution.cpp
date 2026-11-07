class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> suffix(n,1);
        vector<int> preffix(n,1);
        vector<int> answer(n,1);
        for(int i=1;i<n;i++){
           preffix[i]=nums[i-1]*preffix[i-1];
        }
        for(int i=n-2;i>=0;i--){
            suffix[i]=nums[i+1]*suffix[i+1];
        }
        for(int i=0;i<n;i++){
            answer[i]=suffix[i]*preffix[i];
        }
        return answer;

    }
};