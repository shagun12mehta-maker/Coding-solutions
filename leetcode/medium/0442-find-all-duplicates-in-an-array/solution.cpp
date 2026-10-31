#include<unordered_map>
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       unordered_map<int,int> freq; 
       vector<int> ans;
       int size=nums.size();
       for(int i=0;i<size;i++){
        freq[nums[i]]++;
         if(freq[nums[i]]==2){
            ans.push_back(nums[i]);
       }
       
        
       }
       
       return ans;
    }
};