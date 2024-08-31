class Solution {
public:
    int strStr(string haystack, string needle) {
        if (haystack == "" || haystack.length() < needle.length())
            return -1;

        int ans = -1;

        for (int i = 0; i < haystack.length() - needle.length() + 1; i++) {
            string str = haystack.substr(i, needle.size());
            if (str == needle) {
                return i;
            }
        }
        return ans;
    }
};