class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int count =0;
        int index ;
        for(int i=n-1;i>=0;i--){
            if(s[i] != ' '){
                index = i;
                break;
              }
                        
        }
        for(int i=index;i>=0;i--){
            if(s[i] == ' '){
                break;
            }
            else{
                count++;
            }
        }
        return count;
        
    }
};