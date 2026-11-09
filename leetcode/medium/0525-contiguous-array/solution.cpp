#include<unordered_map>
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
      int size=nums.size();
    //    unordered_map<int,int> freq;
  int  totalsum=0;
  int  maxlength=0;
    for(int i=0;i<size;i++){
         unordered_map<int,int> freq;
        for(int j=i;j<size;j++){
                freq[nums[j]]++;
            
 if(freq[0]==freq[1]){
                     maxlength=max(maxlength,freq[0]*2);
                     }
                }  }   
        return maxlength; 
    }
    

};



