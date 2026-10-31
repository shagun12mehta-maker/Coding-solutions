class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        
        //vector<int> nmat;
        int rows=matrix.size();
        int col=matrix[0].size();
        vector<vector<int>> transspose(col,vector<int>(rows));
        for(int i=0;i<col;i++){
            for(int j=0;j<rows;j++){
                
                    transspose[i][j]=matrix[j][i]; 
                }
                
            }
        

return transspose;
    }
};