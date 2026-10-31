#include<unordered_map>
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> sorted=nums;
        unordered_map <int,int>mp;
        int size=sorted.size();
        sort(sorted.begin(),sorted.end());
        for(int i=0;i<size;i++){
            if(mp.find(sorted[i])==mp.end()){
                mp[sorted[i]]=i;
            }
        }
             vector<int> ans;
            for(int i=0;i<size;i++){
                ans.push_back(mp[nums[i]]);

        }

return ans;
    }
};