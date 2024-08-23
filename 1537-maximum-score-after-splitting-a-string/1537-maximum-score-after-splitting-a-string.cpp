class Solution {
public:
    int maxScore(string s) {
        int n = s.size();
        vector<int> prefixSum1(n);
        prefixSum1[n-1] = (int)(s[n-1]) - '0';
        int sums1 = (int)s[n-1] - '0' ;
        for(int i=n-2;i>=0;i--){
            sums1 += (int)s[i] - '0';
            prefixSum1[i] = sums1 ;
        }
        int sums0 = 0;
        int max_sum = INT_MIN;
        for(int i=0;i<n-1;i++){
            if(s[i] == '0')
            sums0++;
            int temp = sums0 + prefixSum1[i+1]; 
            max_sum = max(max_sum,temp);
        }
        return max_sum;
        
    }
};