class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // Horizontal scanning
        // string result = strs[0];
        // if(result == "")
        // return result;
        
        // for(int i=1;i<strs.size();i++){
            
        //     string temp = strs[i];
        //     if(temp == "")
        //     return temp;
        //     int ptr1 = 0;
        //     string curr ="";
        //     while(ptr1<strs[0].size() && ptr1<temp.size()){
        //         if(result[ptr1] == temp[ptr1]){
        //             curr+=result[ptr1];
        //         }
        //         else
        //         break;
        //         ptr1++;
        //     }
        //     result = curr;

        // }
        
        // return result;
        
        //vertical scanning

        if(strs.size()==0)
        return "";
        string temp = strs[0];
        for(int i=0;i<temp.size();i++){
            for(string str:strs){
                if(i == temp.size() || temp[i] != str[i]){
                    return temp.substr(0,i);
                }
            }
        }
        return temp;
        
    }
};