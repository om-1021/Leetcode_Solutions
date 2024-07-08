class Solution {
public:
    void setZeroes(vector<vector<int>>& vec) {
        int m = vec.size();
        int n = vec[0].size();

        //Better approach TC:O(N*M) SC: O(M+N)
        // vector<int> rows(m,0);
        // vector<int> cols(n,0);

        // for(int i=0;i<m;i++){
        //     for(int j=0;j<n;j++){
        //         if(vec[i][j] == 0){
        //             rows[i] = 1;
        //             cols[j] = 1;
        //         }
        //     }
        // }
        // for(int i=0;i<m;i++){
        //     if(rows[i] == 1){
        //         for(int j = 0;j<n;j++){
        //             vec[i][j] =0;
        //         }
        //     }
        // }
        // for(int j=0;j<n;j++){
        //     if(cols[j] == 1){
        //         for(int i = 0;i<m;i++){
        //             vec[i][j] =0;
        //         }
        //     }
        // }

        int col0 = 1;
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(vec[i][j] == 0){
                    // setting row zero
                    vec[i][0] = 0;
                    //setting cols zero
                    if(j != 0)
                    vec[0][j] = 0;
                    else
                    col0 = 0;

                }
            }
        }

        for(int i = 1;i<m;i++){
            for(int j = 1; j<n; j++){
                if(vec[i][j] != 0)
                {
                    if(vec[i][0] == 0 || vec[0][j] == 0)
                        vec[i][j] =0;
                }
            }
        }
        if(vec[0][0] == 0){
            for(int i =0;i<n;i++){
                vec[0][i] = 0;
            }
        }
        if(col0 == 0){
            for(int i =0;i<m;i++){
                vec[i][0] =0;
            }
        }
        
        
    }
};