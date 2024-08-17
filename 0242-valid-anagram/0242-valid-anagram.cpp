class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> vec(26,0);
        if(s.size() != t.size())
        return false;
        for(int i=0;i<s.size();i++){
            vec[(int)s[i] - 97]++;
            vec[(int)t[i] - 97]--;
        }

        for(int x : vec){
            if(x != 0)
            return false;
        }
        return true;
        
    }
}; 