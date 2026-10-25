class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int n=candies.size();
        int max1=INT_MIN;
        for(int i=0;i<n;i++){
            if(candies[i]>max1){
                max1=max(max1,candies[i]);
            }
        }

        for(int i=0;i<n;i++){
            int total=candies[i]+extraCandies;
                        if(total>=max1){
                            result.push_back(true);
                            break;
                        }
                        else{
                            result.push_back(false);
                            break;
                        }
        }  
    return result;
    }
};