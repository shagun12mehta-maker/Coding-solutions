#include<unordered_map>
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int cs=0;
        mp[0]=1;
        int n=nums.size();
        int count=0;

        for
        (int i=0;i<n;i++){
            cs+=nums[i];
            if(mp.find(cs-k)!=mp.end()){
                count+=mp[cs-k];
            }
            mp[cs]++;

        }
        return count;

        
    }
};