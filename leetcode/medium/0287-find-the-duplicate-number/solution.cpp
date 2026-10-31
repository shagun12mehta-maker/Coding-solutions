#include<unordered_map>
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int size=nums.size();
         unordered_map<int,int> freq;
         vector<int> ans;
        for(int i=0;i<size;i++){
           freq[nums[i]]++;
           if(freq[nums[i]]>1){
          ans.push_back(nums[i]);
           }
           }
          return ans[0];
        
    }
};