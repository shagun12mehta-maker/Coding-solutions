class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int size=nums.size();
        vector<int> vec(size,false); 
        vector<int> ans;
        for(int i=0;i<size;i++){
            vec[nums[i]-1]=true;}
        for(int i=0;i<size;i++){
            if(vec[i]==false){
                ans.push_back(i+1);
            }
        }
      
    return ans;
    }
};