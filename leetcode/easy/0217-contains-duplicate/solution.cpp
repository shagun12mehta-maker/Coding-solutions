class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int size=nums.size();
      unordered_set<int> s;
      bool flag=false;
        for(int i=0;i<size;i++){
            if(s.find(nums[i])!=s.end()){
                flag=true;
            }
            s.insert(nums[i]);
            
            }
return flag;
        
        
    }
};