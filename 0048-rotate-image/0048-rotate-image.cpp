class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        // approach
        // step 1: transpose the matrix using swap(arr[i][j],arr[j],[i]);
        // step 2: just reverse each row of the matrix i -> n
        // reverse[arr[i].begin(),arr[i].end()]
        int n = matrix.size();
        int elements = matrix.size() * matrix[0].size();
        int count = 0;

        // transposing the matrix
        for (int i = 0; i < n; i++) {
            if (count < elements / 2) {
                for (int j = 0; j < i; j++)
                    swap(matrix[i][j], matrix[j][i]);
            }
        }

        // reversing the rows
        for (int i = 0; i < n; i++)
            reverse(matrix[i].begin(), matrix[i].end());
    }
};