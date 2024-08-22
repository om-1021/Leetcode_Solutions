class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> umap;
        for (auto x : text) {
            umap[x]++;
        }
          umap['l'] /= 2;
          umap['o'] /= 2;
        int count = 0;

        // while (umap['b'] > 0 and umap['a'] > 0 and umap['l'] > 0 and
        //        umap['o'] > 0 and umap['n'] > 0) {
        //     umap['b']--;
        //     umap['a']--;
        //     umap['l']--;
        //     umap['o']--;
        //     umap['n']--;
        //     count++;
        // }
        return min({umap['b'], umap['a'], umap['l'], umap['o'], umap['n']});
    }
};