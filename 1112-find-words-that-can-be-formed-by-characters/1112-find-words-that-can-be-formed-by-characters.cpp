class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {

        vector<int> vec1(26, 0);
        int count = 0;

        for (int i = 0; i < chars.size(); i++) {
            vec1[chars[i] - 97]++;
        }

        for (int i = 0; i < words.size(); i++) {
            vector<int> temp = vec1;
            bool canForm = true;
            string temp1 = words[i];

            for (int j = 0; j < temp1.size(); j++) {
                if (temp[temp1[j] - 97] == 0) {
                    canForm = false;
                    break;
                }

                temp[temp1[j] - 97]--;
            }
            if(canForm)
            count += temp1.size(); 
        }

        return count;
    }
};