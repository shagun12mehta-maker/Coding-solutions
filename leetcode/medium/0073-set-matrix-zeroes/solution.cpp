class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> zeromatrix;
        zeromatrix=matrix;
        int row=matrix.size();
        int col=matrix[0].size();
        for(int m=0;m<row;m++){
            for(int n=0;n<col;n++){
                
                if(matrix[m][n]==0){
                     int x=m;
                     int y=n;
                   // for(int i=0;i<row;i++){
                        for(int j=0;j<col;j++){

                            zeromatrix[x][j]=0;}
                           for(int i=0;i<row;i++){ 
                            zeromatrix[i][y]=0;
                        }  
                    
                     // for(int i=0;i<row;i++){
                       // for(j=y;j<=y;j++){
                         //   zeromatrix[i][j]=0;
                      //  }  
                    //}

                }
            }
        }
        matrix=zeromatrix;
        
        
    }
};