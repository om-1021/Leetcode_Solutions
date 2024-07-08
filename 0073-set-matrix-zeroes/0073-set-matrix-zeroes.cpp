class Solution {
public:
    void setZeroes(vector<vector<int>>& vec) {
        int m = vec.size();
        int n = vec[0].size();
        vector<int> rows(m,0);
        vector<int> cols(n,0);

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(vec[i][j] == 0){
                    rows[i] = 1;
                    cols[j] = 1;
                }
            }
        }
        for(int i=0;i<m;i++){
            if(rows[i] == 1){
                for(int j = 0;j<n;j++){
                    vec[i][j] =0;
                }
            }
        }
        for(int j=0;j<n;j++){
            if(cols[j] == 1){
                for(int i = 0;i<m;i++){
                    vec[i][j] =0;
                }
            }
        }

        
        
    }
};