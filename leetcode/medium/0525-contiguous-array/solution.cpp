#include<unordered_map>
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
      int size=nums.size();
      unordered_map<int,int> freq;
      for(int i=0;i<size;i++){
        freq[nums[i]]++;
      } 
      if(freq[0]>freq[1]){
        return freq[1];
      }
      else{
        return freq[0];
      }
    }
};