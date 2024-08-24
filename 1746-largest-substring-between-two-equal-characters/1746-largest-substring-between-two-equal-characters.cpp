class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {

        int max_size = -1;
        for(int i=0;i<s.size()-1;i++){
            int curr_size = -1 ;
            for(int j=i+1;j<s.size();j++){
                if(s[i] == s[j]){
                    if(j == i+1)
                    curr_size = 0;
                    else
                    curr_size = j-(i+1);
                }

            }
            max_size = max(curr_size,max_size);
        }
        return max_size;
    }
};