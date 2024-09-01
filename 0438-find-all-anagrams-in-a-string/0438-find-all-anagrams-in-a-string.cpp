class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        if(p.length() > s.length()){
            return {};
        }

        unordered_map<char,int> pCount;
        unordered_map<char,int> sCount;
        vector<int> result;
        
        // Sliding Window 


        for(int i=0;i<p.length();i++){
            pCount[p[i]]++;
            sCount[s[i]]++;
        }
        if(pCount == sCount)
        result.push_back(0);

        int left = 0;
        for(int right = p.length(); right<s.length();right++){
            sCount[s[right]]++;
            sCount[s[left]]--;

            if(sCount[s[left]] == 0 ){
                sCount.erase(s[left]);
            }
            left++;
            if(sCount == pCount){
                result.push_back(left);
            }

        }
        return result;

        // max p map size = number of unique char in p at worst 26 abcdefghijklmnopqrstuvwxyz
        //so TC: O(26 * n) or O(n)

        
        
    }
};