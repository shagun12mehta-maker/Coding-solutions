class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int l=0;
        int r=n-1;
        int maxans=0;
        int w;
        while(l<r){
            int w=r-l;
            int h=min(height[l],height[r]);
           int area=w*h;
            maxans=max(maxans,area);
            if(l<r){
                l++;
            }
            else if(r<l){
                r--;
            }
        }
      return maxans;  
    }
};