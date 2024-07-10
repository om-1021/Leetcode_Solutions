class Solution {

    
public:
    vector<int> getRow(int rowIndex) {
        vector<int> res;
        rowIndex++;
        long long ans = 1;
        res.push_back(1);
        for(int col=1;col<rowIndex;col++){
            ans = ans * (rowIndex-col);
            ans = ans / col ;
            res.push_back(ans);
        }
        return res;
    }
};