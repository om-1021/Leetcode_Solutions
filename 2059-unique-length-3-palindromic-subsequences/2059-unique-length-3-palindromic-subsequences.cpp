class Solution {
public:
    int countPalindromicSubsequence(string s) {

        unordered_set<char> letters;
        for (int i = 0; i < s.length(); i++)
            letters.insert(s[i]);

        int count = 0;

        for (char x : letters) {
            int left_idx = -1;
            int right_idx = -1;

            for (int i = 0; i < s.length(); i++) {
                if (s[i] == x) {
                    if (left_idx == -1) {
                        left_idx = i;
                    }
                    right_idx = i;
                }
            }

            if (left_idx != -1 || right_idx != -1 || left_idx != right_idx) {
                unordered_set<char> temp;
                for (int j = left_idx + 1; j < right_idx; j++) {
                    temp.insert(s[j]);
                }

                count += temp.size();
            }
        }
        return count;
    }
};