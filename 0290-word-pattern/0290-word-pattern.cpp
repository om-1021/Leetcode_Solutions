class Solution {
public:
    bool wordPattern(string pattern, string s) {

        unordered_map<char, string> umapD1;
        unordered_map<string, char> umapD2;
        s +=' ';// to separate the last word;

        vector<string> vec;
        string temp = "";
        for (auto x : s) {
            if (x != ' ') {
                temp += x;
                continue;
            }
            vec.push_back(temp);
            temp = "";
        }

        if (vec.size() != pattern.size()) {
            return false;
        }
        for (int i = 0; i < vec.size(); i++) {
            if (umapD1.find(pattern[i]) == umapD1.end() and umapD2.find(vec[i]) == umapD2.end())
             {
                umapD1[pattern[i]] = vec[i];
                umapD2[vec[i]] = pattern[i];
            } else {
                char key1 = pattern[i];
                string val1 = umapD1[pattern[i]];
                string key2 = vec[i];
                char val2 = umapD2[vec[i]];
                if (key1 == val2 and val1 == key2)
                    continue;
                else
                    return false;
            }
        }

        return true;
    }
};