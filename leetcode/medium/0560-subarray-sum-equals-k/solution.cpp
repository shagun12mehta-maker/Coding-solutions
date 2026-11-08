#include<unordered_map>
class Solution {
public:

    int subarraySum(vector<int>& nums, int k){
        int n=nums.size();
        unordered_map <int,int>freq;
         int cs=0;
int count=0;
freq[0]=1;
       
       for(int i=0;i<n;i++){
        cs+=nums[i];
        if(freq.find(cs-k)!=freq.end()){
           count+= freq[cs-k];
        }
        
            freq[cs]++;
        
        
       }
       return count;
    }
};