class Solution {
public:
    int minSwaps(string s) {
        int extraClosing =0,maxExtraClosing =0;


        for(char x: s){
            if(x == '[')
            extraClosing--;
            else
            extraClosing++;

            maxExtraClosing = max(maxExtraClosing,extraClosing);
        }

        return (maxExtraClosing + 1) /2;
        
    }
};