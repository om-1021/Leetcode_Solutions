class Solution {
public:
    int firstUniqChar(string s) {
        int cs[26] = {0};
        int index = -1;
        for(int i=0;i<s.size();i++){
            cs[s[i] - 97]++;
        }
        for(int i=0;i<s.size();i++){
            if(cs[s[i] - 97] == 1){
                index = i;
                break;
            }
        }
        return index;
        
    }
};