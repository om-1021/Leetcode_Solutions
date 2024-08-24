class Solution {
public:
    int minOperations(string s) {
        string altStart0 = "0";

        for (int i = 1; i < s.size(); i++) {
            if (i % 2 != 0) {
                altStart0 += "1";
            } else
                altStart0 += "0";
        }

        string altStart1 = "1";

        for (int i = 1; i < s.size(); i++) {
            if (i % 2 != 0) {
                altStart1 += "0";
            } else
                altStart1 += "1";
        }

        int diff_altStart0 = 0;
        int diff_altStart1 = 0;

        for(int i =0;i<s.size();i++){
            if(s[i] != altStart0[i])
            diff_altStart0++;
            if(s[i] != altStart1[i])
            diff_altStart1++;
        }
        return min(diff_altStart1,diff_altStart0);
    }
};