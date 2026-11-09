#include<unordered_map>
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
      int size=nums.size();
        unordered_map<int,int> freq;
  int  sum=0;
  int  maxlength=0;
  freq[0]=-1;
    for(int i=0;i<size;i++){
        if(nums[i] == 0) {
    nums[i] = -1;
}
else {
    nums[i] = 1;
}
sum+=nums[i];

 if(freq.find(sum)!=freq.end()){
     maxlength=max(maxlength,i-freq[sum]);
 }
    else{
        freq[sum]=i;
    }
     }                 
        return maxlength; 
    }
    

};



