class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
       int rows = matrix.size();
       int cols = matrix[0].size();
       if( rows == cols){
        for(int i=0;i<rows;i++){
            for(int j=0;j<i;j++)
            swap(matrix[i][j],matrix[j][i]);

        }
        return matrix;
       }

       vector<vector<int>> result(cols,vector<int>(rows));
       for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            result[j][i] = matrix[i][j];
        }
       }
       return result;
    }
};
