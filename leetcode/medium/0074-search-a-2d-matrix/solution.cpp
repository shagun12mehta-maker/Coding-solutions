class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int start=0;
        int rows=matrix.size();
        int cols=matrix[0].size();
        int end=rows*cols-1;
       
        bool flag=true;
      
        while(start<=end){
             int mid=start+(end-start)/2;
               int row=mid/cols;
               int col=mid%cols;
                if(matrix[row][col]>target){
                     end=mid-1;       
        }
        else if(matrix[row][col]<target){
            start=mid+1;
        }
        else if (matrix[row][col]==target){
            return flag;
        }
        }
        flag=false;
        
       
        
       return flag;
    }
};