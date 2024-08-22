class Solution {
public:
    bool searchMatrix(vector<vector<int>>& vec, int target) {
        int row=vec.size();
        int col=vec[0].size();
        int start_row=0;
        int start_col=col-1;
        
        if(target < vec[0][0] or target>vec[row-1][col-1])
            return false;
        
        // while(start_row<row and start_col>=0)
        // {
        //     if(vec[start_row][start_col]==target)
        //         return true;
            
        //     else if(target < vec[start_row][start_col])
        //           start_col--;
        //     else
        //         start_row++;
        // }

        int low = 0;
        int high  = row * col;

        while(low<=high){

            int mid = (low + high)/2;
            int rowReal = mid / col ;
            int colReal = mid % col;
            if(vec[rowReal][colReal] == target)
            return true;

            if(target < vec[rowReal][colReal] ){
                high = mid -1;
            }
            else
            low = mid+1;
        }
        return false;
    }
};