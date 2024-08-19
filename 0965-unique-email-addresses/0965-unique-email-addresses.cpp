class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> result ;
        
        for(string s : emails){
            string cleanString = "";
            for(char c : s){
                if( c == '+' || c =='@')
                break;
                if(c=='.') continue;
                cleanString+=c;
            }
            cleanString += s.substr(s.find('@'));
            result.insert(cleanString);           
            }
        return result.size();
        }
        
    
};